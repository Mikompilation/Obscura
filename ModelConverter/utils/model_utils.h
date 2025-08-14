#ifndef OBSCURA_MODEL_UTILS_H
#define OBSCURA_MODEL_UTILS_H

#include "assimp/mesh.h"
#include "game/sgd_types.h"

bool ShouldParseMesh(SGDPROCUNITHEADER *pHead);
SGDVUMESHSTDATA* GetMeshSTData(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData, SGDVUMESHPOINTNUM *pMeshInfo, bool isIMT_2);

void SetupMeshSt(SGDPROCUNITHEADER *pHead, SGDVUMESHSTDATA *pMD, aiMesh *pMesh, unsigned int currPointIndex);

#endif//OBSCURA_MODEL_UTILS_H
