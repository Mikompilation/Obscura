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
Vector3& operator*(Vector3& source, float factor);
Vector3 operator/(Vector3& source, float factor);
Vector3& operator+(Vector3& source, Vector3& target);
Vector3 operator-(Vector3& source, const Vector3& target);
Matrix4x4 MatrixTranspose(const Matrix4x4 m);
Vector3 Vector3Transform(Vector3 v, Matrix4x4 mat);
void Vector3Normalize(Vector3 &v);
Vector3 Vector3CrossProduct(Vector3 v1, Vector3 v2);
float Vector3DotProduct(Vector3 v1, Vector3 v2);
void Vector4Normalize(Vector4 &v);
Vector3 Triangle(Vector3 v0, Vector3 v1, Vector3 v2, bool clockwise = true);

#endif //OBSCURA_LINALG_H
