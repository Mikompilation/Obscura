#include <cstdlib>
#include "linalg.h"

void Vector2Clamp(Vector2 &v) {
    if (v.x < 0.0f) {
        v.x = 0.0f;
    }

    if (v.x > 1.0f) {
        v.x = 1.0f;
    }

    if (v.y < 0.0f) {
        v.y = 0.0f;
    }

    if (v.y > 1.0f) {
        v.y = 1.0f;
    }
}

void operator/=(Vector2 &v, float factor) {
    v.x = v.x / factor;
    v.y = v.y / factor;
}

void operator*=(Vector2 &v, float factor) {
    v.x = v.x * factor;
    v.y = v.y * factor;
}

Vector3 &operator+=(Vector3 &source, const Vector3 &target) {
    source.x = source.x + target.x;
    source.y = source.y + target.y;
    source.z = source.z + target.z;

    return source;
}

Vector3 &operator+(Vector3 &source, const Vector3 &target) {
    source.x = source.x + target.x;
    source.y = source.y + target.y;
    source.z = source.z + target.z;

    return source;
}

Vector3 &operator+=(Vector3 &source, const Vector4 *target) {
    source.x = source.x + target->x;
    source.y = source.y + target->y;
    source.z = source.z + target->z;

    return source;
}

Vector3 &operator*(Vector3 &source, const float factor) {
    source.x *= factor;
    source.y *= factor;
    source.z *= factor;

    return source;
}

Matrix4x4 MatrixTranspose(const Matrix4x4 m) {
    Matrix4x4 outM{};

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

Vector3 Vector3Transform(Vector3 v, Matrix4x4 mat) {
    Vector3 result = {0};

    float x = v.x;
    float y = v.y;
    float z = v.z;

    result.x = mat.row1.x * x + mat.row1.y * y + mat.row1.z * z + mat.row1.w;
    result.y = mat.row2.x * x + mat.row2.y * y + mat.row2.z * z + mat.row2.w;
    result.z = mat.row3.x * x + mat.row3.y * y + mat.row3.z * z + mat.row3.w;

    return result;
}

void Vector3Normalize(Vector3 &v) {
    float length = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);

    if (length == 0.0f) {
        return;
    }

    v.x /= length;
    v.y /= length;
    v.z /= length;

}
