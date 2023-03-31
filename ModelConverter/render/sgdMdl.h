#pragma once

#include "render.h"
#include "game/sgd.h"
#include "logging.h"

#if INTPTR_MAX == INT64_MAX
#include <stdint.h>
#endif

template<typename T>
T* RelOffsetToPtr(const void* ptr, const int offset)
{
#if INTPTR_MAX == INT64_MAX
    return (T*)((int64_t )ptr + offset);
#elif INTPTR_MAX == INT32_MAX
    return (T*)((int)ptr + (int)offset);
#endif
}

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
void HandleWeightedMesh(int meshIndex, Vector3& vertex, Vector3& normal);
void HandleUniqueMesh(int meshIndex, Vector3& vertex, Vector3& normal);
void HandleTextureMesh(int meshIndex, Vector3& vertex, Vector3& normal);
SGDCOORDINATE* GetCurrentCoordinate();
uint * GetNextUnpackAddr(uint *prim);
void Vector2Clamp(Vector2 &v);
void operator/=(Vector2 &v, float factor);
void operator*=(Vector2 &v, float factor);
Vector3& operator+=(Vector3& source, const Vector3& target);
Vector3& operator+=(Vector3& source, const Vector4* target);
Vector3& operator*(Vector3& source, const float factor);
Vector3& operator+(Vector3& source, const Vector3& target);
Matrix4x4 MatrixTranspose(const Matrix4x4 m);
Vector3 Vector3Transform(Vector3 v, Matrix4x4 mat);
char* ReadFullFile(const char* filename);