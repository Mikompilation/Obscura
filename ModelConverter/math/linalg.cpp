#include "linalg.h"
#include <cmath>

void Vector2Clamp(Vector2 &v)
{
  if (v.x < 0.0f)
  {
    v.x = 0.0f;
  }

  if (v.x > 1.0f)
  {
    v.x = 1.0f;
  }

  if (v.y < 0.0f)
  {
    v.y = 0.0f;
  }

  if (v.y > 1.0f)
  {
    v.y = 1.0f;
  }
}

void operator/=(Vector2 &v, float factor)
{
  v.x = v.x / factor;
  v.y = v.y / factor;
}

void operator*=(Vector2 &v, float factor)
{
  v.x = v.x * factor;
  v.y = v.y * factor;
}

Vector3 &operator+=(Vector3 &source, const Vector3 &target)
{
  source.x = source.x + target.x;
  source.y = source.y + target.y;
  source.z = source.z + target.z;

  return source;
}

Vector3 &operator+(Vector3 &source, Vector3 &target)
{
  source.x = source.x + target.x;
  source.y = source.y + target.y;
  source.z = source.z + target.z;

  return source;
}

Vector3 &operator+=(Vector3 &source, const Vector4 *target)
{
  source.x = source.x + target->x;
  source.y = source.y + target->y;
  source.z = source.z + target->z;

  return source;
}

Vector3 &operator*(Vector3 &source, const float factor)
{
  source.x *= factor;
  source.y *= factor;
  source.z *= factor;

  return source;
}

Matrix4x4 MatrixTranspose(const Matrix4x4 m)
{
  Matrix4x4 outM {};

  outM.row1.x = m.row1.x;
  outM.row1.y = m.row2.x;
  outM.row1.z = m.row3.x;
  outM.row1.w = m.row4.x;

  outM.row2.x = m.row1.y;
  outM.row2.y = m.row2.y;
  outM.row2.z = m.row3.y;
  outM.row2.w = m.row4.y;

  outM.row3.x = m.row1.z;
  outM.row3.y = m.row2.z;
  outM.row3.z = m.row3.z;
  outM.row3.w = m.row4.z;

  outM.row4.x = m.row1.w;
  outM.row4.y = m.row2.w;
  outM.row4.z = m.row3.w;
  outM.row4.w = m.row4.w;

  return outM;
}

void MatrixTranspose(Matrix4x4 *m)
{
  Matrix4x4 outM {};

  // Too lazy right now to optimize this
  for (auto i = 0; i < 4; i++)
  {
    for (auto k = 0; k < 4; k++)
    {
      outM.m[i][k] = m->m[i][k];
    }
  }

  for (auto i = 0; i < 4; i++)
  {
    for (auto k = 0; k < 4; k++)
    {
      m->m[i][k] = outM.m[k][i];
    }
  }
}

Vector3 Vector3Transform(Vector3 v, Matrix4x4 mat)
{
  Vector3 result = {0};

  mat = MatrixTranspose(mat);

  float x = v.x;
  float y = v.y;
  float z = v.z;

  result.x = mat.row1.x * x + mat.row1.y * y + mat.row1.z * z + mat.row1.w;
  result.y = mat.row2.x * x + mat.row2.y * y + mat.row2.z * z + mat.row2.w;
  result.z = mat.row3.x * x + mat.row3.y * y + mat.row3.z * z + mat.row3.w;

  return result;
}

void Vector3Normalize(Vector3 &v)
{
  float length = std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

  if (length == 0.0f)
  {
    return;
  }

  v.x /= length;
  v.y /= length;
  v.z /= length;
}

void Vector4Normalize(Vector4 &v)
{
  float length = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);

  if (length == 0.0f)
  {
    return;
  }

  v.x /= length;
  v.y /= length;
  v.z /= length;
  v.w /= length;
}

Vector3 Vector3CrossProduct(Vector3 v1, Vector3 v2)
{
  Vector3 result = {0};

  result.x = v1.y * v2.z - v1.z * v2.y;
  result.y = v1.z * v2.x - v1.x * v2.z;
  result.z = v1.x * v2.y - v1.y * v2.x;

  return result;
}

Vector3 operator-(Vector3 &source, const Vector3 &target)
{
  Vector3 result = {0};

  result.x = source.x - target.x;
  result.y = source.y - target.y;
  result.z = source.z - target.z;

  return result;
}

Vector3 Triangle(Vector3 v0, Vector3 v1, Vector3 v2, bool clockwise)
{
  Vector3 u = v1 - v0;// edge v0 -> v1
  Vector3 v = v2 - v0;// edge v0 -> v2

  auto l = Vector3CrossProduct(u, v);

  Vector3Normalize(l);
  auto normal = l * (clockwise ? 1.0f : -1.0f);
  return normal;
}

float Vector3DotProduct(Vector3 v1, Vector3 v2)
{
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3 operator/(Vector3 &source, float factor)
{
  Vector3 result = {0};

  result.x = source.x / factor;
  result.y = source.y / factor;
  result.z = source.z / factor;

  return result;
}

void sceVu0CopyMatrix(Matrix4x4 &dest, Matrix4x4 &src)
{
  dest.row1.x = src.row1.x;
  dest.row1.y = src.row1.y;
  dest.row1.z = src.row1.z;
  dest.row1.w = src.row1.w;

  dest.row2.x = src.row2.x;
  dest.row2.y = src.row2.y;
  dest.row2.z = src.row2.z;
  dest.row2.w = src.row2.w;

  dest.row3.x = src.row3.x;
  dest.row3.y = src.row3.y;
  dest.row3.z = src.row3.z;
  dest.row3.w = src.row3.w;

  dest.row4.x = src.row4.x;
  dest.row4.y = src.row4.y;
  dest.row4.z = src.row4.z;
  dest.row4.w = src.row4.w;
}

void sceVu0MulMatrix(Matrix4x4 *dest, Matrix4x4 *src1, Matrix4x4 *src2)
{
  for (auto i = 0; i < 4; i++)
  {
    for (auto j = 0; j < 4; j++)
    {
      dest->m[i][j] = src1->m[i][0] * src2->m[0][j] + 
                      src1->m[i][1] * src2->m[1][j] + 
                      src1->m[i][2] * src2->m[2][j] + 
                      src1->m[i][3] * src2->m[3][j];
    }
  }
}
