#include "GsTexture.h"
#include "utils/utility.h"
#include <vector>
#include <cstring>

#include "utils/logging.h"

void UploadGsTexture(SGDTRI2FILEHEADER *pTRI2HeadTop, SGDPROCUNITHEADER *pHead)
{
  auto img = (uint8_t*)&pTRI2HeadTop[1];
  auto image_load = RelOffsetToPtr<sceGsLoadImage>(&img[pTRI2HeadTop->gsli.giftag1.NLOOP * 0x10], 0);
  auto image_color_data = RelOffsetToPtr<uint8_t>(image_load, sizeof(sceGsLoadImage));

  switch ((PixelStorageFormat)pTRI2HeadTop->gsli.bitbltbuf.DPSM)
  {
    case PSMCT32:
      gsHelper.UploadPSMCT32(pTRI2HeadTop->gsli.bitbltbuf.DBP,
                       pTRI2HeadTop->gsli.bitbltbuf.DBW,
                       pTRI2HeadTop->gsli.trxpos.DSAX,
                       pTRI2HeadTop->gsli.trxpos.DSAY,
                       pTRI2HeadTop->gsli.trxreg.RRW,
                       pTRI2HeadTop->gsli.trxreg.RRH,
                       img);
      break;
    case PSMT4: {
      // Upload CLUT (palette)
      gsHelper.UploadPSMCT32(image_load->bitbltbuf.DBP,
        image_load->bitbltbuf.DBW,
        image_load->trxpos.DSAX,
        image_load->trxpos.DSAY,
        image_load->trxreg.RRW,
        image_load->trxreg.RRH,
        image_color_data);

      gsHelper.UploadPSMT4(pTRI2HeadTop->gsli.bitbltbuf.DBP,
                       pTRI2HeadTop->gsli.bitbltbuf.DBW,
                       pTRI2HeadTop->gsli.trxpos.DSAX,
                       pTRI2HeadTop->gsli.trxpos.DSAY,
                       pTRI2HeadTop->gsli.trxreg.RRW,
                       pTRI2HeadTop->gsli.trxreg.RRH,
                       img);
      break;
    }
    case PSMT8: {
      // Upload CLUT (palette)
      gsHelper.UploadPSMCT32(image_load->bitbltbuf.DBP,
        image_load->bitbltbuf.DBW,
        image_load->trxpos.DSAX,
        image_load->trxpos.DSAY,
        image_load->trxreg.RRW,
        image_load->trxreg.RRH,
        image_color_data);

      gsHelper.UploadPSMT8(pTRI2HeadTop->gsli.bitbltbuf.DBP,
                       pTRI2HeadTop->gsli.bitbltbuf.DBW,
                       pTRI2HeadTop->gsli.trxpos.DSAX,
                       pTRI2HeadTop->gsli.trxpos.DSAY,
                       pTRI2HeadTop->gsli.trxreg.RRW,
                       pTRI2HeadTop->gsli.trxreg.RRH,
                       img);
      break;
    }
    default: programLogger->info("Texture Transfer Upload Info: DPSM {:#x}", (int)pTRI2HeadTop->gsli.bitbltbuf.DPSM); break;
  }
}

Texture* DownloadGsTexture(sceGsTex0* pMeshTexReg) {
  std::vector<uint8_t> img;

  switch (pMeshTexReg->PSM)
  {
    case PSMCT32:
      img = gsHelper.DownloadPSMCT32(
        pMeshTexReg->TBP0, pMeshTexReg->TBW,
        0, 0,
        1<<pMeshTexReg->TW, 1<<pMeshTexReg->TH
      );
      break;
    case PSMT4:
      img = gsHelper.DownloadImagePSMT4(
        pMeshTexReg->TBP0, pMeshTexReg->TBW,
        0, 0,
        1<<pMeshTexReg->TW, 1<<pMeshTexReg->TH,
        pMeshTexReg->CBP, pMeshTexReg->TBW,
        pMeshTexReg->CSA, -1
        );
      break;
    case PSMT8:
      img = gsHelper.DownloadImagePSMT8(
        pMeshTexReg->TBP0, pMeshTexReg->TBW,
        0, 0,
        1<<pMeshTexReg->TW, 1<<pMeshTexReg->TH,
        pMeshTexReg->CBP, pMeshTexReg->TBW,
        -1
        );
      break;
  }

  return CreateTextureFromRawData(1<<pMeshTexReg->TW, 1<<pMeshTexReg->TH, img.data(), pMeshTexReg->TBP0);
}

namespace {
int GetBlockIdPSMCT32(int block, int x, int y) {
  const int block_y = (y >> 3) & 0x03;
  const int block_x = (x >> 3) & 0x07;
  return block + ((x >> 1) & ~0x1F) + kBlockTablePSMCT32[(block_y << 3) | block_x];
}

int GetPixelAddressPSMCT32(int block, int width, int x, int y) {
  const int page = (block >> 5) + (y >> 5) * width + (x >> 6);
  const int column_base = ((y >> 1) & 0x03) << 4;
  const int column_y = y & 0x01;
  const int column_x = x & 0x07;
  const int column = column_base + kColumnTablePSMCT32[(column_y << 3) | column_x];
  const int addr = ((page << 11) + (GetBlockIdPSMCT32(block & 0x1F, x & 0x3F, y & 0x1F) << 6) + column);
  return (addr << 2) & 0x003FFFFC;
}

int GetBlockIdPSMT8(int block, int x, int y) {
  const int block_y = (y >> 4) & 0x03;
  const int block_x = (x >> 4) & 0x07;
  return block + ((x >> 2) & ~0x1F) + kBlockTablePSMT8[(block_y << 3) | block_x];

}

int GetPixelAddressPSMT8(int block, int width, int x, int y) {
  const int page = (block >> 5) + (y >> 6) * (width >> 1) + (x >> 7);
  const int column_y = y & 0x0F;
  const int column_x = x & 0x0F;
  const int column = kColumnTablePSMT8[(column_y << 4) | column_x];
  const int addr = (page << 13) + (GetBlockIdPSMT8(block & 0x1F, x & 0x7F, y & 0x3F) << 8) + column;
  return addr;
}

int GetBlockIdPSMT4(int block, int x, int y) {
  const int block_base = ((y >> 6) & 0x01) << 4;
  const int block_y = (y >> 4) & 0x03;
  const int block_x = (x >> 5) & 0x03;
  return block + ((x >> 2) & ~0x1F) + block_base + kBlockTablePSMT4[(block_y << 2) | block_x];
}

int GetPixelAddressPSMT4(int block, int width, int x, int y) {
  const int page = ((block >> 5) + (y >> 7) * (width >> 1) + (x >> 7));
  const int column_y = y & 0x0F;
  const int column_x = x & 0x1F;
  const int column = kColumnTablePSMT4[(column_y << 5) | column_x];
  const int addr = (page << 14) + (GetBlockIdPSMT4(block & 0x1F, x & 0x7F, y & 0x7F) << 9) + column;
  return addr;
}

}  // namespace

GSHelper::GSHelper() {
  mem_.resize(4 * 1024 * 1024);  // 4 MB
}

void GSHelper::UploadPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf)
{
  int src_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMCT32(dbp, dbw, x, y);
      mem_[addr + 0x00] = inbuf[src_addr + 0x00];
      mem_[addr + 0x01] = inbuf[src_addr + 0x01];
      mem_[addr + 0x02] = inbuf[src_addr + 0x02];
      mem_[addr + 0x03] = inbuf[src_addr + 0x03];
      src_addr += 0x04;
    }
  }
}

void GSHelper::UploadPSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf) {
  int src_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMT8(dbp, dbw, x, y);
      mem_[addr] = inbuf[src_addr++];
    }
  }
}

void GSHelper::UploadPSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf) {
  int src_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMT4(dbp, dbw, x, y);
      const int src_nibble = (inbuf[src_addr >> 1] >> ((src_addr & 0x01) << 2)) & 0x0F;
      mem_[addr >> 1] = (src_nibble << ((addr & 0x01) << 2)) | (mem_[addr >> 1] & (0xF0 >> ((addr & 0x01) << 2)));
      src_addr++;
    }
  }
}

std::vector<uint8_t> GSHelper::DownloadPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh) {
  std::vector<uint8_t> outbuf(rrw * rrh * 4);
  int dst_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMCT32(dbp, dbw, x, y);
      outbuf[dst_addr + 0x00] = mem_[addr + 0x00];
      outbuf[dst_addr + 0x01] = mem_[addr + 0x01];
      outbuf[dst_addr + 0x02] = mem_[addr + 0x02];
      outbuf[dst_addr + 0x03] = mem_[addr + 0x03];
      dst_addr += 0x04;
    }
  }
  return outbuf;
}

std::vector<uint8_t> GSHelper::DownloadPSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh) {
  // Not implemented
  return std::vector<uint8_t>();
}

std::vector<uint8_t> GSHelper::DownloadPSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh) {
  // Not implemented
  return std::vector<uint8_t>();
}

std::vector<uint8_t> GSHelper::DownloadImagePSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, int cbp, int cbw, char alpha_reg) {
  std::vector<uint8_t> outbuf(rrw * rrh * 4);
  int dst_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMT8(dbp, dbw, x, y);
      const int clut_index = mem_[addr];

      //int cx = clut_index % 16;
      //int cy = clut_index / 16;

      int cy = (clut_index & 0xE0) >> 4;
      int cx = clut_index & 0x07;
      if (clut_index & 0x08) cy++;
      if (clut_index & 0x10) cx += 8;

      const int p = GetPixelAddressPSMCT32(cbp, cbw, cx, cy);
      outbuf[dst_addr + 0x00] = mem_[p + 0x00];
      outbuf[dst_addr + 0x01] = mem_[p + 0x01];
      outbuf[dst_addr + 0x02] = mem_[p + 0x02];
      if (alpha_reg >= 0) {
        outbuf[dst_addr + 0x03] = alpha_reg;
      } else {
        const char src_alpha = mem_[p + 0x03];
        outbuf[dst_addr + 0x03] = src_alpha;
      }
      dst_addr += 4;
    }
  }
  return outbuf;
}

std::vector<uint8_t> GSHelper::DownloadImagePSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, int cbp, int cbw, int csa, char alpha_reg) {
  std::vector<uint8_t> outbuf(rrw * rrh * 4);
  int dst_addr = 0;
  for (int y = dsay; y < dsay + rrh; ++y) {
    for (int x = dsax; x < dsax + rrw; ++x) {
      const int addr = GetPixelAddressPSMT4(dbp, dbw, x, y);
      const int clut_index = (mem_[addr >> 1] >> ((addr & 0x01) << 2)) & 0x0F;

      const int cy = ((clut_index >> 3) & 0x01) + (csa & 0x0E);
      const int cx = (clut_index & 0x07) + ((csa & 0x01) << 3);

      const int p = GetPixelAddressPSMCT32(cbp, cbw, cx, cy);
      outbuf[dst_addr + 0x00] = mem_[p + 0x00];
      outbuf[dst_addr + 0x01] = mem_[p + 0x01];
      outbuf[dst_addr + 0x02] = mem_[p + 0x02];
      if (alpha_reg >= 0) {
        outbuf[dst_addr + 0x03] = alpha_reg;
      } else {
        const char src_alpha = mem_[p + 0x03];
        outbuf[dst_addr + 0x03] = src_alpha;// >= 0 ? (src_alpha << 1) : 0xFF;
      }
      dst_addr += 4;
    }
  }
  return outbuf;
}

void GSHelper::Clear() {
  memset(mem_.data(), 0, mem_.size() * sizeof(char));
}