#include "gra3dSGDData.h"

void sgdCalcCoordinateMatrix(SGDFILEHEADER *sgdTop, SGDCOORDINATE *pCoord)
{
    if (pCoord != nullptr && pCoord->bCalc == 0)
    {
        auto pCoord_00 = pCoord->pParent != -1 ? &GetCoordinatePtr(sgdTop)[pCoord->pParent] : nullptr;

        if (pCoord_00 == nullptr)
        {
            sceVu0CopyMatrix(pCoord->matLocalWorld, pCoord->matCoord);
        }
        else
        {
            sgdCalcCoordinateMatrix(sgdTop, pCoord_00);
            sceVu0MulMatrix(&pCoord->matLocalWorld, &pCoord_00->matLocalWorld, &pCoord->matCoord);
        }

        pCoord->bCalc = 1;
    }
}

void sgdCalcBoneCoordinate(SGDFILEHEADER *sgdTop, SGDCOORDINATE *pCoord, int iNumBlock)
{
    for (auto i = 0; i < iNumBlock; i++)
    {
        pCoord[i].bCalc = 0;
        sgdCalcCoordinateMatrix(sgdTop, &pCoord[i]);
    }
}