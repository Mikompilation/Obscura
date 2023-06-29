#pragma once

#include "game/sgd.h"
#include "utils/logging.h"
#include "math/linalg.h"
#include "assimp/mesh.h"

void DisplayFF2Model(const char* filename);
void HandleProcUnit(SGDFILEHEADER *sgd);
void SgSortUnitPrim(SGDPROCUNITHEADER *pHead);
void HandleVUVNDataBlock(SGDPROCUNITHEADER* pHead);
void HandleMeshDataBlock(SGDPROCUNITHEADER *pHead);
void HandleMaterialDataBlock(SGDPROCUNITHEADER *pHead);
void HandleCoordinateDataBlock(SGDPROCUNITHEADER *pHead);
void HandleBoundingBoxDataBlock(SGDPROCUNITHEADER *pHead);
void HandleGsImageDataBlock(SGDPROCUNITHEADER* pHead);
void HandleTri2DataBlock(SGDPROCUNITHEADER* pHead);
void HandleFlatMesh(int meshIndex, Vector3& vertex, Vector3& normal);
void HandleNVLMesh(int meshIndex, Vector3& vertex, Vector3& normal);
void HandleWeightedMesh(int meshIndex, int currentPoint, Vector3& vertex, Vector3& normal, aiMesh* mesh);
void HandleUniqueMesh(int meshIndex, Vector3& vertex, Vector3& normal);
void HandleTextureMesh(int meshIndex, Vector3& vertex, Vector3& normal);
SGDCOORDINATE* GetCurrentCoordinate();