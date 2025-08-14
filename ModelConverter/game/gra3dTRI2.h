#ifndef OBSCURA_GRA3DTRI2_H
#define OBSCURA_GRA3DTRI2_H

#include "sgd_types.h"
int gra3dGenerateTRI2FileFromVRAM(SGDTRI2FILEHEADER *pTRI2HeadTop, TRI2SIZEDATA *pSD);
static void _MakeTRI2FileByVRAMImage(SGDTRI2FILEHEADER *pTRI2Head, short int sVRAMAddress, unsigned int uiPageSize);

#endif//OBSCURA_GRA3DTRI2_H
