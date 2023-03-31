#pragma once

#include "Texture.h"
#include "sgd_types.h"
#include <vector>

class Mesh
{
 public:
  std::vector<std::string> mesh_name;
  std::vector<Vector4> ambient;
  std::vector<Vector4> diffuse;
  std::vector<Vector4> specular;
  std::vector<Vector2> uv;
  std::vector<Vector3> vertices;
  std::vector<Vector3> vertex_normals;
  std::vector<Vector3i> triangles;
  std::vector<int> triangle_material_id;
  std::vector<Texture *> textures;
  Mesh& operator+=(const Mesh& other);
};
