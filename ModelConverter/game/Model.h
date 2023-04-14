#ifndef OBSCURA_MODEL_H
#define OBSCURA_MODEL_H

#include <vector>
#include <map>
#include "Texture.h"
#include "Mesh.h"

class Model {
private:
    std::vector<Texture *> textures;
    std::map<std::string, Mesh> meshes;
    std::vector<Mesh> vectorMeshes;
    SGDFILEHEADER *sgdTop;
    SGDFILEHEADER *sgdCurr;
    SGDPROCUNITHEADER *s_ppuhVUVN;
    SGDCOORDINATEDESC *sgdCoordintate;
    SGDVUMATERIALDESC *sgdMaterial;
};


#endif //OBSCURA_MODEL_H
