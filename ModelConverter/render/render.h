#pragma once

#include "game/Mesh.h"
#include "game/sgd_types.h"
#include "igl/opengl/ViewerData.h"
#include <vector>

void DrawTriangleMeshes(std::vector<Mesh> meshes);
void RunVisualizer();
void InitVisualizer();
void ConvertSgdMeshToIglMesh(Mesh mesh, igl::opengl::ViewerData* viewerData);
void ExportMdl(std::vector<Mesh> meshes, std::string filename);