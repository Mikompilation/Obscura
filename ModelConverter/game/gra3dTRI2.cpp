#include "gra3dTRI2.h"

template <class _Tp>
inline const _Tp& min(const _Tp& __a, const _Tp& __b) {
  return __b < __a ? __b : __a;
}

template <class _Tp>
inline const _Tp& max(const _Tp& __a, const _Tp& __b) {
  return  __a < __b ? __b : __a;
}

int gra3dGenerateTRI2FileFromVRAM(SGDTRI2FILEHEADER *pTRI2HeadTop,
                                  TRI2SIZEDATA *pSD)
{
  SGDTRI2FILEHEADER *pTRI2HeadWork = pTRI2HeadTop;
  int iNewNumTexture = 0;
  int minaddr = pSD->uiMinAddress;
  int tsize = pSD->uiPageSize;
    
  for (; tsize > 0; iNewNumTexture++) {
    int tempMax = min(0x3f, tsize); // v1
        
    _MakeTRI2FileByVRAMImage(pTRI2HeadWork, minaddr, tempMax);
    pTRI2HeadWork = (SGDTRI2FILEHEADER *)((char*)pTRI2HeadWork + tempMax * 1024 * 8 + sizeof(SGDTRI2FILEHEADER));
    tsize -= tempMax;
    minaddr += tempMax << 5;
  }
    
  return iNewNumTexture;
}

void _MakeTRI2FileByVRAMImage(SGDTRI2FILEHEADER *pTRI2Head, short sVRAMAddress,
                              unsigned int uiPageSize)
{
}
