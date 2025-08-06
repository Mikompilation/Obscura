#pragma once

#include "Texture.h"
#include "assimp/scene.h"
#include "packfile.h"
#include "sgd_types.h"
#include <filesystem>
#include <map>
#include <unordered_map>
#include <vector>

struct MultiBoneMesh
{
    int meshIndex;
    int boneIndex;
    float weight;
};

class Model {
public:
    Model(std::filesystem::path filename);
    void ExtractModel();
private:
    bool isCharacterModel;
    std::filesystem::path exportFolder;
    std::filesystem::path exportFilename;
    PK2_HEAD* pakFile;
    std::vector<Texture *> textures;
    SGDFILEHEADER *sgdTop;
    SGDFILEHEADER *sgdCurr;
    SGDPROCUNITHEADER *s_ppuhVUVN;
    SGDCOORDINATEDESC *sgdCoordinate;
    SGDVUMATERIALDESC *sgdMaterial;

    aiScene *scene;
    std::vector<aiMesh*> aiMeshes;
    std::unordered_map<int, std::vector<std::vector<std::pair<int, float>>>> vertexBoneWeights;
    std::vector<std::vector<unsigned int>> aiMeshesIndex;
    std::vector<MultiBoneMesh> aiMultiBoneMeshes;
    std::vector<aiNode*> aiNodes;
    std::vector<aiMaterial*> aiMaterials;
    std::vector<aiTexture*> aiTextures;
    std::vector<aiBone*> Bones;

    void ConvertToNodeBinaryTree();
    void ReadTextures();
    int ReadTex0TextureIndex(SGDPROCUNITDATA *pProcData, std::string materialName);
    void CreateModelNodes();
    void CalculateBoneTransforms();
    void ReadSGD(PK2_HEAD* mdlPak);
    void TraverseProcUnit(SGDFILEHEADER *sgd);
    void SgSortUnitPrim(SGDPROCUNITHEADER *pHead);
    void HandleVUVNDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleMaterialDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleCoordinateDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleBoundingBoxDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleMeshDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleGsImageDataBlock(SGDPROCUNITHEADER *pHead);
    void HandleTri2DataBlock(SGDPROCUNITHEADER *pHead);
    int FindMaterialIndex(SGDPROCUNITDATA *pProcData);
    void BuildScene();
    void HandleFlatMesh(int meshIndex, Vector3& vertex, Vector3& normal);
    void HandleNVLMesh(int meshIndex, Vector3& vertex, Vector3& normal);
    void HandleWeightedMesh(int meshIndex, int currentPoint, Vector3& vertex, Vector3& normal, aiMesh* mesh);
    void HandleUniqueMesh(int meshIndex, Vector3& vertex, Vector3& normal);
    SGDCOORDINATE* GetCurrentCoordinate();
    Matrix4x4 GetCoordinateMatrix(int iCoordId);
    aiMatrix4x4 GetGlobalTransform(aiNode* node);
};