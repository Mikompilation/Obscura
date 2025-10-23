#ifndef OBSCURA_GSTEXTURE_H
#define OBSCURA_GSTEXTURE_H

#include "sgd_types.h"
#include "render/tim2.h"
#include "Texture.h"
#include <string>
#include <vector>

// Helper class for transmitting data to and from simulated GS memory.
class GSHelper {
 public:
  GSHelper();
  ~GSHelper() = default;
  void UploadPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf);
  void UploadPSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf);
  void UploadPSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, const uint8_t* inbuf);
  std::vector<uint8_t> DownloadPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh);
  std::vector<uint8_t> DownloadPSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh);
  std::vector<uint8_t> DownloadPSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh);
  std::vector<uint8_t> DownloadImagePSMT8(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, int cbp, int cbw, char alpha_reg);
  std::vector<uint8_t> DownloadImagePSMT4(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, int cbp, int cbw, int csa, char alpha_reg);
  void Clear();

 private:
  std::vector<char> mem_;
};

inline static GSHelper gsHelper;

Texture *LoadTim2GsTexture(SGDTRI2FILEHEADER *pTRI2HeadTop);
void UploadGsTexture(SGDTRI2FILEHEADER *pTRI2HeadTop, SGDPROCUNITHEADER *pHead);
Texture *DownloadGsTexture(sceGsTex0* pMeshTexReg);

#endif //OBSCURA_GSTEXTURE_H
