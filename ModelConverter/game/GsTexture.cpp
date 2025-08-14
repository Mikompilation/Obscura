#include "GsTexture.h"
#include "utils/utility.h"
#include <vector>
#include <cstring>


unsigned int *GetUnpackAddr(unsigned int *prim)
{
  while ((*prim) != 0x51 || (prim[4]) != 0x52)
  {
    prim = prim + 1;
  }
  
  return &prim[0xe];
}

Texture *LoadTim2GsTexture(SGDTRI2FILEHEADER *pTRI2HeadTop)
{
  int image_h = pTRI2HeadTop->gsli.trxreg.RRH;
  int image_w = pTRI2HeadTop->gsli.trxreg.RRW;
  auto data_size = image_w * image_h;
  auto numColors = 0;
  auto clutType = NO_CLUT;
  auto clutColorType = RGBA16;
  auto image_color_index_off = 0;
  
  switch(pTRI2HeadTop->gsli.bitbltbuf.DPSM)
  {
    
    case PSMT4HL:
    case PSMT4HH:
    case PSMZ32 :
    case PSMZ24 :
    case PSMZ16 :
    case PSMZ16S:
    case PSMCT24:
    case PSMCT16 :
    case PCMCT16S:
    case PSMT4:
      clutType = IDTEX4;
      clutColorType = RGBA32;
      numColors = 0x10;
      image_color_index_off = data_size >> 1;
      break;
    case PSMCT32:
    case PSMT8H:
    case PSMT8:
      clutType = IDTEX8;
      clutColorType = RGBA32;
      numColors = 0x100;
      image_color_index_off = data_size;
      break;
  }  

  auto image_color_index = RelOffsetToPtr<uint8_t>(&pTRI2HeadTop[1], 0);
  
  // Restore line if some textures are broken                                                   sizeof(sceGsLoadImage)
  auto image_color_data = RelOffsetToPtr<uint8_t>(&image_color_index[image_color_index_off], sizeof(sceGsLoadImage));
  //auto image_color_data = RelOffsetToPtr<uint8_t>(&pTRI2HeadTop[1], pTRI2HeadTop->uiVif1Code_DIRECT.size * 0x10 - numColors * 4);
  //auto image_color_data = (unsigned char*)GetUnpackAddr((unsigned int *)image_color_index);
  
  auto image_data = new std::vector<unsigned int>(data_size);
    
  for(auto x = 0; x < image_w; x++)
  {
    for(auto y = 0; y < image_h; y++)
    {
      auto image_offset = x + y * image_w;
      
      auto index = Tim2GetTexel(image_color_index, x, y, image_w, clutType);
      image_data->data()[image_offset] = Tim2GetClutColor(image_color_data, clutType, clutColorType, numColors, 0, index);
    }
  }
  
  return CreateTextureFromRawData(image_w, image_h, image_data->data(), pTRI2HeadTop->gsli.bitbltbuf.DBP);
}