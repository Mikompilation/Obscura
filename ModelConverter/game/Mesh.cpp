#include "Mesh.h"

Mesh &Mesh::operator+=(const Mesh &other)
{
  mesh_name.insert(mesh_name.end(), other.mesh_name.begin(), other.mesh_name.end());
  ambient.insert(ambient.end(), other.ambient.begin(), other.ambient.end());
  diffuse.insert(diffuse.end(), other.diffuse.begin(), other.diffuse.end());
  specular.insert(specular.end(), other.specular.begin(), other.specular.end());

  int offset = vertices.size();

  uv.insert(uv.end(), other.uv.begin(), other.uv.end());

  vertices.insert(vertices.end(), other.vertices.begin(), other.vertices.end());
  vertex_normals.insert(vertex_normals.end(), other.vertex_normals.begin(),other.vertex_normals.end());

  for (auto i = 0; i < other.triangles.size(); i++)
  {
    auto vec3 = other.triangles[i];
    triangles.push_back(
        Vector3i {vec3.x + offset, vec3.y + offset, vec3.z + offset});
  }

  triangle_material_id.insert(triangle_material_id.end(), other.triangle_material_id.begin(), other.triangle_material_id.end());
  textures.insert(textures.end(), other.textures.begin(), other.textures.end());

  return *this;
}
