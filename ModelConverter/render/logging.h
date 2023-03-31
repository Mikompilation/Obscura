#ifndef FATALSTACK_LOGGING_H
#define FATALSTACK_LOGGING_H

#include "game/sgd.h"

void PrintBlockCategory(int iCategory, const char *partName);
void PrintNewSGD(int sgdNum);
void PrintPoint(float x, float y, float z);
void PrintVectorInfo(Vector3 v3);
void PrintBlockInfo(SGDPROCUNITHEADER *pHead, SGDFILEHEADER* pSGDTop);
void PrintEmptyBlock();
void PrintBlockBeginning(int i);
void PrintBlockEnding(int i);
void PrintBlockTypeCategory(int iCategory, const char* partName);

#endif //FATALSTACK_LOGGING_H
