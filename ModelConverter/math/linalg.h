#ifndef OBSCURA_LINALG_H
#define OBSCURA_LINALG_H

struct Vector2i {
    int x;
    int y;
};

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Vector3i {
    int x;
    int y;
    int z;
};

struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};

struct Matrix4x4 {
    Vector4 row1;
    Vector4 row2;
    Vector4 row3;
    Vector4 row4;
};

void Vector2Clamp(Vector2 &v);
void operator/=(Vector2 &v, float factor);
void operator*=(Vector2 &v, float factor);
Vector3& operator+=(Vector3& source, const Vector3& target);
Vector3& operator+=(Vector3& source, const Vector4* target);
Vector3& operator*(Vector3& source, const float factor);
Vector3& operator+(Vector3& source, const Vector3& target);
Matrix4x4 MatrixTranspose(const Matrix4x4 m);
Vector3 Vector3Transform(Vector3 v, Matrix4x4 mat);

#endif //OBSCURA_LINALG_H
