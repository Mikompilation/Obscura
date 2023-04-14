#ifndef OBSCURA_EXPORTER_H
#define OBSCURA_EXPORTER_H

#include <filesystem>
#include "Mesh.h"

void ExportMesh(const std::vector<Mesh>& meshes, const std::filesystem::path& path);

#endif //OBSCURA_EXPORTER_H
