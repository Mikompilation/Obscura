#include "logging.h"

#include <stdio.h>
#include <string>

void PrintVectorInfo(Vector3 v3) {
    auto sum = v3.x * v3.x + v3.y * v3.y + v3.z * v3.z;
    printf("\nVector Info : XYZ [ %0.6f, %0.6f, %0.6f ], Pow %0.6f", v3.x, v3.y, v3.z, sum);
}

void PrintNewSGD(int sgdNum) {
    printf("\n|---------------------|");
    printf("\n|                     |");
    printf("\n|    New SGD Header   |");
    printf("\n|         %2d          |", sgdNum);
    printf("\n|                     |");
    printf("\n|                     |");
    printf("\n|---------------------|");
}

void PrintBlockInfo(SGDPROCUNITHEADER* pHead, SGDFILEHEADER* pSGDTop) {
    std::string partName = "";

    switch (pHead->iCategory) {
    case VUVN:
        partName = "VUVN Type: 0x" + std::to_string(pHead->VUVNDesc.ucVectorType);

        PrintBlockTypeCategory(pHead->iCategory, partName.c_str());
        return;
    case MESH:
        partName = "Mesh Type: 0x" + std::to_string(pHead->VUMeshDesc.ucMeshType);

        PrintBlockTypeCategory(pHead->iCategory, partName.c_str());
        return;
    case MATERIAL:
        printf("\n----- New Sub Model Part -----");
        partName = GetMaterialPtr(pSGDTop, pHead->VUMaterialDesc.pMat)->strTexName;
        break;
    case COORDINATE:
        partName = "Coord  ";
        break;
    case BOUNDING_BOX:
        partName = "BoundingBox";
        break;
    default:
        partName = "";
        break;
    
    }

    PrintBlockCategory(pHead->iCategory, partName.c_str());
}

void PrintBlockTypeCategory(int iCategory, const char* partName) {
    printf("\n|---------------------|");
    printf("\n|                     |");
    printf("\n|                     |");
    printf("\n|         %2d          |", iCategory);
    printf("\n|   %11s    |", partName);
    printf("\n|                     |");
    printf("\n|---------------------|");
}

void PrintBlockCategory(int iCategory, const char *partName) {
    printf("\n|---------------------|");
    printf("\n|                     |");
    printf("\n|                     |");
    printf("\n|         %2d          |", iCategory);
    printf("\n|     %11s     |", partName);
    printf("\n|                     |");
    printf("\n|---------------------|");
}

void PrintPoint(float x, float y, float z) {
    printf("\nPoint : [ %.6f, %.6f, %.6f ]", x, y, z);
}

void PrintEmptyBlock() {
    printf("\n|---------------------|");
    printf("\n|                     |");
    printf("\n|                     |");
    printf("\n|        EMPTY        |");
    printf("\n|                     |");
    printf("\n|                     |");
    printf("\n|---------------------|\n");
}

void PrintBlockBeginning(int i) {
    printf("\n----- Begin Block %4d -----", i);
}

void PrintBlockEnding(int i) {
    printf("\n----- End   Block %4d -----\n", i);
}

