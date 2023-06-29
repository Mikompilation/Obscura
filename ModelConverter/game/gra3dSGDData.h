#ifndef OBSCURA_GRA3DSGDDATA_H
#define OBSCURA_GRA3DSGDDATA_H

#include "sgd_types.h"

void sgdCalcCoordinateMatrix(SGDFILEHEADER *sgdTop, SGDCOORDINATE *pCoord);
void sgdCalcBoneCoordinate(SGDFILEHEADER *sgdTop, SGDCOORDINATE *pCoord, int iNumBlock);

#endif //OBSCURA_GRA3DSGDDATA_H
