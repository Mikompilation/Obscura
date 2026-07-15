#pragma once

#include "Texture.h"
#include "assimp/scene.h"
#include "packfile.h"
#include "sgd_types.h"
#include <cstddef>
#include <filesystem>
#include <map>
#include <memory>
#include <unordered_map>
#include <vector>

class Model {
public:
    Model(std::filesystem::path filename);
    ~Model();
    void ExtractModel();
private:
    bool isCharacterModel;
    bool isFF1Layout = false;
    std::filesystem::path exportFolder;
    std::filesystem::path exportFilename;
    std::filesystem::path sourceFilename;
    PK2_HEAD* pakFile;
    PK2_HEAD* modelPak = nullptr;
    PK2_HEAD* texturePak = nullptr;
    std::vector<Texture *> textures;
    SGDFILEHEADER *sgdTop;
    SGDFILEHEADER *sgdCurr;
    SGDPROCUNITHEADER *s_ppuhVUVN;
    SGDCOORDINATEDESC *sgdCoordinate;
    SGDVUMATERIALDESC *sgdMaterial;
    SGDTRI2FILEHEADER *previousTRI2FileHeader = nullptr;

    aiScene *scene;
    std::vector<aiMesh*> aiMeshes;
    std::unordered_map<int, std::vector<std::vector<std::pair<int, float>>>> vertexBoneWeights;
    std::vector<std::vector<unsigned int>> aiMeshesIndex;
    std::vector<aiNode*> aiNodes;
    std::vector<aiMaterial*> aiMaterials;
    std::vector<aiTexture*> aiTextures;
    std::vector<aiBone*> Bones;
    std::vector<Matrix4x4> ff1NoScaleCoordinateWorld;
    int boundingBoxMaterialIndex = -1;

    struct LoadedFileBuffer {
        std::unique_ptr<char[]> data;
        size_t size = 0;
    };

    std::vector<LoadedFileBuffer> loadedFiles;

    char* LoadOwnedFile(const std::filesystem::path& filename);
    size_t AvailableBytes(const void* ptr) const;
    bool ResolveModelLayout();
    void InspectPackageEntry(void* entry);
    bool TryUseModelPak(PK2_HEAD* pak);
    bool TryUseTexturePak(PK2_HEAD* pak);
    bool TryLoadSidecarModelPak();
    bool TryLoadSidecarTexturePak();
    bool LooksLikePak(PK2_HEAD* pak) const;
    bool LooksLikeSgd(const void* data) const;
    bool LooksLikeSgdPak(PK2_HEAD* pak) const;
    bool LooksLikeTexturePak(PK2_HEAD* pak) const;
    bool TryUnwrapFF1Chunk(void* entry, int& chunkType, void*& payload) const;
    int GetBoundingBoxMaterialIndex();
    void AddBoundingBoxMesh(int coordId, const Vector4* bbox);

    void ConvertToNodeBinaryTree();
    void ReadTextures();
    int ReadTex0TextureIndex(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData, std::string materialName);
    void CreateModelNodes();
    void CalculateBoneTransforms();
    void BuildFF1NoScaleCoordinateWorld(SGDCOORDINATE* coord, int coordCount);
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
    int GetMeshCoordId(SGDPROCUNITHEADER* pHead) const;
    int FindMaterialIndex(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData);
    void BuildScene();
    void HandleFlatMesh(int vertexIndex, int normalIndex, Vector3& vertex, Vector3& normal);
    void HandleNVLMesh(int meshIndex, Vector3& vertex, Vector3& normal);
    bool ShouldUseWeightedLoopMesh(SGDPROCUNITHEADER* pHead) const;
    void HandleWeightedMesh(int meshIndex, Vector3& vertex, Vector3& normal,
                            std::unordered_map<int, float>& boneWeights,
                            std::vector<std::pair<int, float>>& vertexWeights);
    bool HandleWeightedLoopMesh(int meshIndex, Vector3& vertex, Vector3& normal,
                                std::unordered_map<int, float>& boneWeights,
                                std::vector<std::pair<int, float>>& vertexWeights);
    void AppendWeightedMeshByDominantFace(
        aiMesh* sourceMesh,
        const std::vector<std::vector<std::pair<int, float>>>& perVertexWeights,
        int fallbackCoordId);
    void HandleUniqueMesh(int meshIndex, Vector3& vertex, Vector3& normal);
    SGDCOORDINATE* GetCurrentCoordinate();
    Matrix4x4 GetCoordinateMatrix(int iCoordId);
    aiMatrix4x4 GetGlobalTransform(aiNode* node);
};
