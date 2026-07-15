#include "Model.h"
#include "GsTexture.h"
#include "assimp/postprocess.h"
#include "gra3dSGDData.h"
#include "gra3dTRI2.h"
#include "packfile.h"
#include "render/tim2.h"
#include "utils/assimp_utils.h"
#include "utils/logging.h"
#include "utils/model_utils.h"
#include "utils/utility.h"

#include <cmath>
#include <cstdint>
#include <cstring>
#include <map>
#include <utility>

namespace {
constexpr int FF1_MODEL_CHUNK = 5;
constexpr int FF1_TEXTURE_CHUNK = 6;
constexpr size_t FF1_CHUNK_HEADER_SIZE = 0x10;
constexpr int MAX_REASONABLE_PACK_FILES = 4096;

constexpr unsigned int BOUNDING_BOX_EDGE_COUNT = 12;
constexpr unsigned int BOUNDING_BOX_EDGES[BOUNDING_BOX_EDGE_COUNT][2] = {
    {0, 1}, {0, 2}, {1, 3}, {2, 3},
    {4, 5}, {4, 6}, {5, 7}, {6, 7},
    {0, 4}, {1, 5}, {2, 6}, {3, 7},
};
constexpr float PS2_NEUTRAL_VERTEX_COLOR = 128.0f / 255.0f;

Matrix4x4 StripCoordinateScale(Matrix4x4 matrix)
{
  Vector4 *basisRows[] = {&matrix.row1, &matrix.row2, &matrix.row3};

  for (auto row : basisRows)
  {
    auto length = std::sqrt(row->x * row->x + row->y * row->y
                            + row->z * row->z);

    if (length > 0.000001f)
    {
      row->x /= length;
      row->y /= length;
      row->z /= length;
    }
  }

  return matrix;
}

float ClampColorComponent(float value)
{
  if (value < 0.0f)
  {
    return 0.0f;
  }

  if (value > 1.0f)
  {
    return 1.0f;
  }

  return value;
}

float NormalizePS2Weight(float value)
{
  if (value > 1.0f)
  {
    value /= 255.0f;
  }

  return ClampColorComponent(value);
}

Vector3 TransformDirection(Vector3 direction, Matrix4x4 matrix)
{
  auto transposed = MatrixTranspose(matrix);

  return {
      transposed.row1.x * direction.x
      + transposed.row1.y * direction.y
      + transposed.row1.z * direction.z,
      transposed.row2.x * direction.x
      + transposed.row2.y * direction.y
      + transposed.row2.z * direction.z,
      transposed.row3.x * direction.x
      + transposed.row3.y * direction.y
      + transposed.row3.z * direction.z};
}

Vector3 BlendWeightedNormalPair(const Vector4 *normalPair,
                                Matrix4x4 bone0,
                                Matrix4x4 bone1)
{
  auto n0 = TransformDirection(
      {normalPair[0].x, normalPair[0].y, normalPair[0].z}, bone0);
  auto n1 = TransformDirection(
      {normalPair[1].x, normalPair[1].y, normalPair[1].z}, bone1);
  auto w0 = NormalizePS2Weight(normalPair[0].w);
  auto w1 = 1.0f - w0;
  auto normalScale = std::abs(bone0.row4.w) > 0.000001f
                     ? bone0.row4.w
                     : 1.0f;

  return {
      (n0.x * w0 + n1.x * w1) * normalScale,
      (n0.y * w0 + n1.y * w1) * normalScale,
      (n0.z * w0 + n1.z * w1) * normalScale};
}

Vector3 InverseTransformPoint(Vector3 point, Matrix4x4 matrix)
{
  auto transposed = MatrixTranspose(matrix);
  auto x = point.x - transposed.row1.w;
  auto y = point.y - transposed.row2.w;
  auto z = point.z - transposed.row3.w;

  return {
      transposed.row1.x * x + transposed.row2.x * y + transposed.row3.x * z,
      transposed.row1.y * x + transposed.row2.y * y + transposed.row3.y * z,
      transposed.row1.z * x + transposed.row2.z * y + transposed.row3.z * z};
}

Vector3 InverseTransformDirection(Vector3 direction, Matrix4x4 matrix)
{
  auto transposed = MatrixTranspose(matrix);

  return {
      transposed.row1.x * direction.x
      + transposed.row2.x * direction.y
      + transposed.row3.x * direction.z,
      transposed.row1.y * direction.x
      + transposed.row2.y * direction.y
      + transposed.row3.y * direction.z,
      transposed.row1.z * direction.x
      + transposed.row2.z * direction.y
      + transposed.row3.z * direction.z};
}

int FindDominantWeightedBone(const std::unordered_map<int, float> &boneWeights,
                             int fallbackBone,
                             size_t nodeCount)
{
  int bestBone = fallbackBone;
  float bestWeight = -1.0f;

  for (const auto &[boneId, weight] : boneWeights)
  {
    if (boneId < 0 || static_cast<size_t>(boneId) >= nodeCount)
    {
      continue;
    }

    if (weight > bestWeight)
    {
      bestBone = boneId;
      bestWeight = weight;
    }
  }

  if (bestBone < 0 || static_cast<size_t>(bestBone) >= nodeCount)
  {
    return 0;
  }

  return bestBone;
}

int FindDominantFaceBone(
    const aiFace &face,
    const std::vector<std::vector<std::pair<int, float>>> &perVertexWeights,
    int fallbackBone,
    size_t nodeCount)
{
  std::unordered_map<int, float> faceWeights;

  for (unsigned int i = 0; i < face.mNumIndices; i++)
  {
    auto vertexIndex = face.mIndices[i];

    if (vertexIndex >= perVertexWeights.size())
    {
      continue;
    }

    for (const auto &[boneId, weight] : perVertexWeights[vertexIndex])
    {
      faceWeights[boneId] += weight;
    }
  }

  return FindDominantWeightedBone(faceWeights, fallbackBone, nodeCount);
}

aiColor4D ToVertexColor(const Vector3 &color)
{
  return {ClampColorComponent(color.x), ClampColorComponent(color.y),
          ClampColorComponent(color.z), 1.0f};
}

bool IsColorRepeatSentinel(const Vector3 &color)
{
  int raw = 0;
  std::memcpy(&raw, &color.x, sizeof(raw));

  return raw == 1;
}

bool IsWeightedLoopMeshType(unsigned char meshType)
{
  return meshType == 0x02 || meshType == 0x0A;
}

bool IsWeightedLoopVectorType(unsigned short vectorType)
{
  return vectorType == SVA_WEIGHTED || vectorType == 3;
}

unsigned char GetVuvnVectorType(const SGDVUVNDESC &desc)
{
  // VUVN_PRIM stores { short vnum, short nnum, char vif_size, char vtype }.
  return static_cast<unsigned char>((desc.ucSize >> 8) & 0xff);
}

const _ONELIST *FindWeightedListEntry(const _VERTEXLIST *list,
                                      unsigned int vectorIndex)
{
  if (list == nullptr || list->iNumList <= 0
      || list->iNumList > MAX_REASONABLE_PACK_FILES)
  {
    return nullptr;
  }

  unsigned int offset = 0;

  for (auto i = 0; i < list->iNumList; i++)
  {
    const auto &entry = list->aList[i];
    const auto count = static_cast<unsigned int>(entry.usNumVector);

    if (vectorIndex >= offset && vectorIndex < offset + count)
    {
      return &entry;
    }

    offset += count;
  }

  return nullptr;
}

const _VERTEXLIST *GetWeightedNormalList(const _VERTEXLIST *positionList)
{
  if (positionList == nullptr || positionList->iNumList <= 0
      || positionList->iNumList > MAX_REASONABLE_PACK_FILES)
  {
    return nullptr;
  }

  return reinterpret_cast<const _VERTEXLIST *>(
      &positionList->aList[positionList->iNumList]);
}

Vector3 GetMeshColor(_SGDVUMESHCOLORDATA *colorData, int index)
{
  auto color = colorData->avColor[index];

  if (index >= 2 && IsColorRepeatSentinel(color))
  {
    return colorData->avColor[index - 2];
  }

  return color;
}

sceGsTex0 *GetMeshTex0(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData)
{
  if (IsPresetMesh(pHead))
  {
    return RelOffsetToPtr<sceGsTex0>(pProcData, 0x28);
  }

  auto meshTexReg = RelOffsetToPtr<sceGsTex0>(pProcData, 0x18);

  if (pProcData->VUMeshData.GifTag.NREG == 6)
  {
    meshTexReg = RelOffsetToPtr<sceGsTex0>(pProcData, 0x28);
  }

  return meshTexReg;
}

std::string MakeMaterialKey(const std::string &materialName,
                            const sceGsTex0 *tex0)
{
  auto name = materialName.empty() ? std::string("material") : materialName;

  if (tex0 == nullptr)
  {
    return name + "_no_tex";
  }

  return name
         + "_tbp" + std::to_string(static_cast<int>(tex0->TBP0))
         + "_tbw" + std::to_string(static_cast<int>(tex0->TBW))
         + "_psm" + std::to_string(static_cast<int>(tex0->PSM))
         + "_wh" + std::to_string(1 << tex0->TW)
         + "x" + std::to_string(1 << tex0->TH)
         + "_cbp" + std::to_string(static_cast<int>(tex0->CBP))
         + "_cpsm" + std::to_string(static_cast<int>(tex0->CPSM))
         + "_csa" + std::to_string(static_cast<int>(tex0->CSA));
}
}

Model::Model(std::filesystem::path filename)
{
  this->sourceFilename = filename;
  this->pakFile = (PK2_HEAD *) this->LoadOwnedFile(filename);
  this->scene = new aiScene();
  this->isCharacterModel = filename.extension() == ".mdl"
                           || filename.extension() == ".mpk";

  this->exportFolder = std::filesystem::current_path()
                       / filename.filename().replace_extension("");
  this->exportFilename =
      filename.filename();

  std::filesystem::create_directories(exportFolder);
}

char *Model::LoadOwnedFile(const std::filesystem::path &filename)
{
  LoadedFileBuffer loaded {};
  loaded.size = static_cast<size_t>(std::filesystem::file_size(filename));
  loaded.data.reset(ReadFullFile(filename));

  auto result = loaded.data.get();
  this->loadedFiles.emplace_back(std::move(loaded));

  return result;
}

size_t Model::AvailableBytes(const void *ptr) const
{
  if (ptr == nullptr)
  {
    return 0;
  }

  auto address = reinterpret_cast<uintptr_t>(ptr);

  for (const auto &loaded : this->loadedFiles)
  {
    auto start = reinterpret_cast<uintptr_t>(loaded.data.get());
    auto end = start + loaded.size;

    if (address >= start && address < end)
    {
      return static_cast<size_t>(end - address);
    }
  }

  return 0;
}

bool Model::LooksLikePak(PK2_HEAD *pak) const
{
  auto available = this->AvailableBytes(pak);

  if (available < 0x20)
  {
    return false;
  }

  if (pak->pack_num <= 0 || pak->pack_num > MAX_REASONABLE_PACK_FILES)
  {
    return false;
  }

  if (pak->offset[0] > available)
  {
    return false;
  }

  return true;
}

bool Model::LooksLikeSgd(const void *data) const
{
  if (this->AvailableBytes(data) < sizeof(SGDFILEHEADER))
  {
    return false;
  }

  auto sgd = reinterpret_cast<const SGDFILEHEADER *>(data);

  return sgd->uiVersionId == SGD_VALID_VERSIONID
         && sgd->uiNumBlock > 0
         && sgd->uiNumBlock < MAX_REASONABLE_PACK_FILES;
}

bool Model::LooksLikeSgdPak(PK2_HEAD *pak) const
{
  if (!this->LooksLikePak(pak))
  {
    return false;
  }

  return this->LooksLikeSgd(GetFileInPak(pak, 0));
}

bool Model::LooksLikeTexturePak(PK2_HEAD *pak) const
{
  if (!this->LooksLikePak(pak))
  {
    return false;
  }

  auto firstTexture = GetFileInPak(pak, 0);

  return this->AvailableBytes(firstTexture) >= 4
         && std::memcmp(firstTexture, "TIM2", 4) == 0;
}

bool Model::TryUnwrapFF1Chunk(void *entry, int &chunkType,
                              void *&payload) const
{
  auto available = this->AvailableBytes(entry);

  if (available < FF1_CHUNK_HEADER_SIZE)
  {
    return false;
  }

  auto words = reinterpret_cast<const uint32_t *>(entry);
  auto chunkSize = words[0];
  auto type = static_cast<int>(words[1]);

  if (type != FF1_MODEL_CHUNK && type != FF1_TEXTURE_CHUNK)
  {
    return false;
  }

  if (chunkSize < FF1_CHUNK_HEADER_SIZE || chunkSize > available)
  {
    return false;
  }

  chunkType = type;
  payload = reinterpret_cast<char *>(entry) + FF1_CHUNK_HEADER_SIZE;

  return true;
}

bool Model::TryUseModelPak(PK2_HEAD *pak)
{
  if (this->modelPak != nullptr || !this->LooksLikeSgdPak(pak))
  {
    return false;
  }

  this->modelPak = pak;
  return true;
}

bool Model::TryUseTexturePak(PK2_HEAD *pak)
{
  if (this->texturePak != nullptr || !this->LooksLikeTexturePak(pak))
  {
    return false;
  }

  this->texturePak = pak;
  return true;
}

void Model::InspectPackageEntry(void *entry)
{
  if (entry == nullptr)
  {
    return;
  }

  int chunkType = 0;
  void *payload = nullptr;

  if (this->TryUnwrapFF1Chunk(entry, chunkType, payload))
  {
    this->isFF1Layout = true;

    if (chunkType == FF1_MODEL_CHUNK)
    {
      this->TryUseModelPak(reinterpret_cast<PK2_HEAD *>(payload));
      return;
    }

    this->TryUseTexturePak(reinterpret_cast<PK2_HEAD *>(payload));
    return;
  }

  auto pak = reinterpret_cast<PK2_HEAD *>(entry);

  if (this->TryUseModelPak(pak))
  {
    return;
  }

  this->TryUseTexturePak(pak);
}

bool Model::TryLoadSidecarModelPak()
{
  auto sidecar = this->sourceFilename;
  sidecar.replace_extension(".mpk");

  if (sidecar == this->sourceFilename || !std::filesystem::exists(sidecar))
  {
    return false;
  }

  this->isFF1Layout = true;

  if (this->modelPak != nullptr)
  {
    return true;
  }

  auto pak = reinterpret_cast<PK2_HEAD *>(this->LoadOwnedFile(sidecar));

  if (!this->TryUseModelPak(pak))
  {
    auto sidecarName = sidecar.filename().string();
    programLogger->warn("Ignoring sidecar model pack with unknown layout: {}",
                        sidecarName.c_str());
    return false;
  }

  return true;
}

bool Model::TryLoadSidecarTexturePak()
{
  auto sidecar = this->sourceFilename;
  sidecar.replace_extension(".pk2");

  if (sidecar == this->sourceFilename || !std::filesystem::exists(sidecar))
  {
    return false;
  }

  this->isFF1Layout = true;

  if (this->texturePak != nullptr)
  {
    return true;
  }

  auto pak = reinterpret_cast<PK2_HEAD *>(this->LoadOwnedFile(sidecar));

  if (!this->TryUseTexturePak(pak))
  {
    auto sidecarName = sidecar.filename().string();
    programLogger->warn("Ignoring sidecar texture pack with unknown layout: {}",
                        sidecarName.c_str());
    return false;
  }

  return true;
}

bool Model::ResolveModelLayout()
{
  this->modelPak = nullptr;
  this->texturePak = nullptr;
  this->sgdTop = nullptr;
  this->isFF1Layout = false;

  if (this->sourceFilename.extension() == ".mpk")
  {
    this->isFF1Layout = true;
  }

  if (this->LooksLikeSgd(this->pakFile))
  {
    this->sgdTop = reinterpret_cast<SGDFILEHEADER *>(this->pakFile);
    return true;
  }

  this->TryUseModelPak(this->pakFile);
  this->TryUseTexturePak(this->pakFile);

  if (this->LooksLikePak(this->pakFile))
  {
    for (auto i = 0; i < this->pakFile->pack_num; i++)
    {
      this->InspectPackageEntry(GetFileInPak(this->pakFile, i));

      if (!this->isCharacterModel)
      {
        this->InspectPackageEntry(
            reinterpret_cast<void *>(Pk2GetAddr(this->pakFile, i)));
      }
    }
  }

  this->TryLoadSidecarModelPak();
  this->TryLoadSidecarTexturePak();

  if (this->modelPak == nullptr)
  {
    return false;
  }

  this->sgdTop = reinterpret_cast<SGDFILEHEADER *>(
      GetFileInPak(this->modelPak, 0));

  if (!this->LooksLikeSgd(this->sgdTop))
  {
    this->sgdTop = nullptr;
    return false;
  }

  if (this->isFF1Layout)
  {
    auto filename = this->exportFilename.filename().string();
    programLogger->info("Detected FF1 split/wrapped model layout for {}",
                        filename.c_str());
  }

  return true;
}

int Model::GetBoundingBoxMaterialIndex()
{
  if (this->boundingBoxMaterialIndex >= 0)
  {
    return this->boundingBoxMaterialIndex;
  }

  auto material = new aiMaterial();
  auto name = aiString("__bounding_box");
  aiColor4D color(0.1f, 0.9f, 0.2f, 1.0f);

  material->AddProperty(&name, AI_MATKEY_NAME);
  material->AddProperty(&color, 1, AI_MATKEY_COLOR_DIFFUSE);
  material->AddProperty(&color, 1, AI_MATKEY_COLOR_EMISSIVE);

  this->boundingBoxMaterialIndex = static_cast<int>(this->aiMaterials.size());
  this->aiMaterials.push_back(material);

  return this->boundingBoxMaterialIndex;
}

void Model::AddBoundingBoxMesh(int coordId, const Vector4 *bbox)
{
  if (bbox == nullptr || coordId < 0)
  {
    return;
  }

  if (static_cast<size_t>(coordId) >= this->aiMeshesIndex.size())
  {
    programLogger->warn("Skipping bounding box with invalid coordinate id {}",
                        coordId);
    return;
  }

  auto mesh = new aiMesh();
  auto meshName = std::string("BoundingBox_") + std::to_string(this->aiMeshes.size());
  mesh->mName = aiString(meshName);
  mesh->mMaterialIndex = this->GetBoundingBoxMaterialIndex();
  mesh->mPrimitiveTypes = aiPrimitiveType_LINE;
  mesh->mNumVertices = 8;
  mesh->mVertices = new aiVector3D[mesh->mNumVertices];

  for (auto i = 0; i < 8; i++)
  {
    mesh->mVertices[i] = {bbox[i].x, bbox[i].y, bbox[i].z};
  }

  mesh->mNumFaces = BOUNDING_BOX_EDGE_COUNT;
  mesh->mFaces = new aiFace[mesh->mNumFaces];

  for (auto i = 0; i < BOUNDING_BOX_EDGE_COUNT; i++)
  {
    mesh->mFaces[i].mNumIndices = 2;
    mesh->mFaces[i].mIndices = new unsigned int[2];
    mesh->mFaces[i].mIndices[0] = BOUNDING_BOX_EDGES[i][0];
    mesh->mFaces[i].mIndices[1] = BOUNDING_BOX_EDGES[i][1];
  }

  auto meshIndex = static_cast<unsigned int>(this->aiMeshes.size());
  this->aiMeshesIndex[coordId].push_back(meshIndex);
  this->aiMeshes.push_back(mesh);
}

Model::~Model()
{
  for (auto v : textures)
  {
    if (v == nullptr)
    {
      continue;
    }

    //delete v;
  }

  //delete this->scene;
}

void Model::ExtractModel()
{
  if (!this->ResolveModelLayout())
  {
    auto filename = this->exportFilename.filename().string();
    programLogger->error("Failed to read model file: {}", filename.c_str());
    return;
  }

  this->sgdCurr = this->sgdTop;

  this->ReadTextures();
  
  this->CreateModelNodes();
  this->CalculateBoneTransforms();
  this->ReadSGD(this->modelPak);
  this->BuildScene();

  auto exporterOptions = aiProcess_ValidateDataStructure | aiProcess_EmbedTextures;

  ExportScene(exportFolder / this->exportFilename, "gltf2", scene,exporterOptions);
  ExportScene(exportFolder / this->exportFilename, "obj", scene,exporterOptions);
}

void Model::BuildScene()
{
  this->ConvertToNodeBinaryTree();
  this->scene->mNumMeshes = this->aiMeshes.size();
  this->scene->mMeshes = this->aiMeshes.data();
  this->scene->mNumMaterials = this->aiMaterials.size();
  this->scene->mMaterials = this->aiMaterials.data();
  this->scene->mNumTextures = this->aiTextures.size();
  this->scene->mTextures = this->aiTextures.data();
}

void Model::ConvertToNodeBinaryTree()
{
  this->scene->mRootNode = nullptr;
  
  for (size_t i = 0; i < aiNodes.size(); i++)
  {
    aiNodes[i]->mNumMeshes = aiMeshesIndex[i].size();
    aiNodes[i]->mMeshes = aiMeshesIndex[i].empty()
                              ? nullptr
                              : aiMeshesIndex[i].data();
    
    // Link children
    std::vector<aiNode *> children;
    for (auto j = 0; j < aiNodes.size(); j++)
    {
      if (aiNodes[j]->mParent == aiNodes[i] && j != i)
      {
        children.push_back(aiNodes[j]);
      }
    }

    aiNodes[i]->mNumChildren = children.size();
    aiNodes[i]->mChildren = children.empty() ? nullptr : new aiNode *[children.size()];
    for (size_t j = 0; j < children.size(); j++)
    {
      aiNodes[i]->mChildren[j] = children[j];
    }
  }
  
  // Find the root node (has no parent)
  for (auto node : aiNodes)
  {
    if (node->mParent == nullptr)
    {
      this->scene->mRootNode = node;
      //this->scene->mRootNode->mParent = nullptr;
      break;
    }
  }
  
  // Rewrite bone assignments per mesh
  for (size_t meshIndex = 0; meshIndex < aiMeshes.size(); ++meshIndex)
  {
    aiMesh *mesh = aiMeshes[meshIndex];

    if (!this->isCharacterModel)
      continue;

    // Prepare bone weight map: boneId -> list of (vertexId, weight)
    std::unordered_map<int, std::vector<aiVertexWeight>> boneWeightMap;

    // Assume mesh stores this data somewhere — your logic must track per-vertex bone influences
    // Example: Store it while constructing the mesh in HandleWeightedMesh:
    //    vertexBoneWeights[meshIndex][vertexIndex] = {{bone0, w0}, {bone1, w1}};
    auto it = vertexBoneWeights.find(meshIndex);
    if (it == vertexBoneWeights.end())
      continue;

    const auto &perVertexWeights = it->second;

    for (size_t vertexId = 0; vertexId < perVertexWeights.size(); ++vertexId)
    {
      for (const auto &[boneId, weight] : perVertexWeights[vertexId])
      {
        if (weight < 0.0f) continue;

        boneWeightMap[boneId].emplace_back(static_cast<unsigned int>(vertexId), weight);
      }
    }

    // Assign bones to mesh
    mesh->mNumBones = boneWeightMap.size();
    mesh->mBones = new aiBone *[mesh->mNumBones];

    int boneCounter = 0;
    for (const auto &[boneId, weights] : boneWeightMap)
    {
      auto *bone = new aiBone();

      bone->mName = aiNodes[boneId]->mName;
      
      auto boneNode = aiNodes[boneId];
      bone->mNode = boneNode;
      aiMatrix4x4 globalTransform = GetGlobalTransform(boneNode);
      bone->mOffsetMatrix  = globalTransform.Inverse();

      bone->mNumWeights = weights.size();
      bone->mWeights = new aiVertexWeight[bone->mNumWeights];

      for (size_t w = 0; w < weights.size(); ++w)
      {
        bone->mWeights[w] = weights[w];
      }

      mesh->mBones[boneCounter++] = bone;
    }
  }
}

void Model::ReadTextures()
{
  if (this->texturePak == nullptr)
  {
    return;
  }

  for (auto i = 0; i < this->texturePak->pack_num; i++)
  {
    auto tim2 = (TIM2_FILEHEADER *) GetFileInPak(this->texturePak, i);

    if (tim2 == nullptr || ((int64_t) tim2 & 0xf) != 0
        || !Tim2CheckFileHeader(tim2))
    {
      programLogger->critical("Found broken model with invalid textures");
      continue;
    }

    auto ph = Tim2GetPictureHeader(tim2, 0);

    auto convertedTim2 = LoadTim2Texture(tim2);
    auto img =
        CreateTextureFromRawData(convertedTim2->Width, convertedTim2->Height,
                                 convertedTim2->image, ph->GsTex0.TBP0);
    
    delete[] convertedTim2->image;
    delete convertedTim2;
    this->textures.emplace_back(img);
  }
}

int Model::FindMaterialIndex(SGDPROCUNITHEADER *pHead,
                             SGDPROCUNITDATA *pProcData)
{
  auto pMaterial =
      GetMaterialPtr(this->sgdCurr, this->sgdMaterial->iMaterialIndex);
  auto materialName = MakeMaterialKey(GetMaterialStrName(pMaterial),
                                      GetMeshTex0(pHead, pProcData));

  int matIndex = -1;
  auto currentMaterial =
      FindMaterial(this->aiMaterials, materialName, &matIndex);

  if (currentMaterial == nullptr)
  {
    matIndex = this->ReadTex0TextureIndex(pHead, pProcData, materialName);
  }

  return matIndex;
}

int Model::ReadTex0TextureIndex(SGDPROCUNITHEADER *pHead,
                                SGDPROCUNITDATA *pProcData,
                                std::string materialName)
{
  auto mesh_tex_reg = GetMeshTex0(pHead, pProcData);
  
  programLogger->info("Texture Info: TB0 {:#x}", (int)mesh_tex_reg->TBP0);
  
  auto matIndex = this->aiMaterials.size();
  Texture *t = nullptr;

  for (auto v : textures)
  {
    if (v == nullptr)
    {
      continue;
    }

    if (v->GetAddress() == mesh_tex_reg->TBP0)
    {
      t = v;
      break;
    }
  }

  if (t == nullptr && this->sgdMaterial->iMaterialIndex < this->textures.size())
  {
    t = this->textures[this->sgdMaterial->iMaterialIndex];
  }

  if (t == nullptr)
  {
    t = DownloadGsTexture(mesh_tex_reg);
    if (t != nullptr)
    {
      this->textures.emplace_back(t);
    }
  }

  auto pMaterial =
      GetMaterialPtr(this->sgdCurr, this->sgdMaterial->iMaterialIndex);
  auto currentMaterial =
      CreateNewMaterial(this->exportFolder, materialName, t, pMaterial);

  this->aiMaterials.push_back(currentMaterial);

  return matIndex;
}

SGDCOORDINATE *Model::GetCurrentCoordinate()
{
  return GetCoordinatePtr(sgdCurr) == nullptr ? GetCoordinatePtr(sgdTop)
                                              : GetCoordinatePtr(sgdCurr);
}

void Model::CreateModelNodes()
{
  for (auto i = 0; i < this->sgdTop->uiNumBlock - 1; i++)
  {
    this->aiMeshesIndex.emplace_back(std::vector<unsigned int>());
    auto n = new aiNode();
    n->mName = "Node" + std::to_string(i);
    aiNodes.emplace_back(n);
  }
}

void Model::CalculateBoneTransforms()
{
  auto coord = GetCoordinatePtr(this->sgdTop);
  auto coordCount = static_cast<int>(this->sgdTop->uiNumBlock - 1);

  sgdCalcBoneCoordinate(sgdTop, coord, coordCount);
  this->BuildFF1NoScaleCoordinateWorld(coord, coordCount);

  for (auto i = 0; i < aiNodes.size(); i++)
  {
    this->aiNodes[i]->mParent =
        coord[i].pParent != -1 ? aiNodes[coord[i].pParent] : nullptr;

    auto matCoord = this->isFF1Layout
                    ? this->ff1NoScaleCoordinateWorld[i]
                    : coord[i].matCoord;
    auto aiMat = aiMatrix4x4(*(aiMatrix4x4 *) &matCoord);

    if (this->isFF1Layout && coord[i].pParent >= 0
        && coord[i].pParent < coordCount)
    {
      auto matCoordParent =
          this->ff1NoScaleCoordinateWorld[coord[i].pParent];
      auto aiMatParent = aiMatrix4x4(*(aiMatrix4x4 *) &matCoordParent);

      this->aiNodes[i]->mTransformation =
          aiMatParent.Inverse().Transpose() * aiMat.Transpose();
      continue;
    }

    this->aiNodes[i]->mTransformation = aiMat.Transpose();
  }
}

void Model::BuildFF1NoScaleCoordinateWorld(SGDCOORDINATE *coord, int coordCount)
{
  this->ff1NoScaleCoordinateWorld.clear();

  if (!this->isFF1Layout || coord == nullptr || coordCount <= 0)
  {
    return;
  }

  this->ff1NoScaleCoordinateWorld.resize(coordCount);

  for (auto i = 0; i < coordCount; i++)
  {
    this->ff1NoScaleCoordinateWorld[i] =
        StripCoordinateScale(coord[i].matCoord);
  }
}

void Model::ReadSGD(PK2_HEAD *mdlPak)
{
  if (!this->isCharacterModel)
  {
    sgdRemap(sgdCurr);
    TraverseProcUnit(sgdCurr);

    return;
  }

  if (mdlPak == nullptr)
  {
    auto filename = this->exportFilename.filename().string();
    programLogger->error("No model pack found in {}",
                         filename.c_str());
    return;
  }
  
  programLogger->info("-----  # of SGD {} -----\n", mdlPak->pack_num);

  for (auto i = 0; i < mdlPak->pack_num; i++)
  {
    PrintSGDBeginning(i);
    sgdCurr = (SGDFILEHEADER *) GetFileInPak(mdlPak, i);
    sgdRemap(sgdCurr);
    TraverseProcUnit(sgdCurr);
    PrintSGDEnding(i);
  }
}

void Model::TraverseProcUnit(SGDFILEHEADER *sgd)
{
  for (int i = 0; i < sgd->uiNumBlock; i++)
  {
    PrintBlockBeginning(i);

    auto *pHead = GetTopProcUnitHeaderPtr(sgd, i);

    if (pHead == (SGDPROCUNITHEADER *) nullptr)
    {
      PrintEmptyBlock();
      continue;
    }

    while (pHead != (SGDPROCUNITHEADER *) nullptr
           && ((int64_t) pHead & 0xf) == 0)
    {
      PrintBlockInfo(pHead, sgd);

      SgSortUnitPrim(pHead);

      pHead = GetNextProcUnitHeaderPtr(pHead);
    }

    PrintBlockEnding(i);
  }

  this->sgdCoordinate = nullptr;
}

void Model::SgSortUnitPrim(SGDPROCUNITHEADER *pHead)
{
  switch (pHead->iCategory)
  {
    /// Contains the vertex, normal data
    case VUVN:
      this->HandleVUVNDataBlock(pHead);
      break;
    case MESH:
      this->HandleMeshDataBlock(pHead);
      break;
    case MATERIAL:
      this->HandleMaterialDataBlock(pHead);
      break;
    case COORDINATE:
      this->HandleCoordinateDataBlock(pHead);
      break;
    case BOUNDING_BOX:
      this->HandleBoundingBoxDataBlock(pHead);
      break;
    case GS_IMAGE:
      this->HandleGsImageDataBlock(pHead);
      break;
    case TRI2:
    //case MonotoneTRI2:
      this->HandleTri2DataBlock(pHead);
      break;
    default:
      return;
  }
}

void Model::HandleVUVNDataBlock(SGDPROCUNITHEADER *pHead)
{
  this->s_ppuhVUVN = pHead;
}

void Model::HandleMaterialDataBlock(SGDPROCUNITHEADER *pHead)
{
  this->sgdMaterial = &pHead->VUMaterialDesc;
}

void Model::HandleCoordinateDataBlock(SGDPROCUNITHEADER *pHead)
{
  this->sgdCoordinate = &pHead->CoordDesc;
}

void Model::HandleBoundingBoxDataBlock(SGDPROCUNITHEADER *pHead)
{
  auto bbox = reinterpret_cast<Vector4 *>(&pHead[1]);
  this->AddBoundingBoxMesh(pHead->BoundingBoxDesc.iCoordId, bbox);
}

void Model::HandleGsImageDataBlock(SGDPROCUNITHEADER *pHead)
{
  auto sgdGsImage =
      RelOffsetToPtr<SGDGSIMAGEDESC>(&pHead[1], pHead->TexDesc.iPaddingSize);
}

void Model::HandleTri2DataBlock(SGDPROCUNITHEADER *pHead)
{
  auto pTRI2HeadTop = RelOffsetToPtr<SGDTRI2FILEHEADER>(&pHead[1], pHead->TexDesc.iPaddingSize);
  auto rTexDesc = &pHead->TexDesc;
  
  this->previousTRI2FileHeader = pTRI2HeadTop;

  for (auto i = 0; i < rTexDesc->iNumTexture; i++)
  {
    UploadGsTexture(pTRI2HeadTop, pHead);

    pTRI2HeadTop = RelOffsetToPtr<SGDTRI2FILEHEADER>(
        &pTRI2HeadTop->gsli, pTRI2HeadTop->uiVif1Code_DIRECT.size * 0x10);
  }
}

int Model::GetMeshCoordId(SGDPROCUNITHEADER *pHead) const
{
  if (this->sgdCoordinate != nullptr
      && this->sgdCoordinate->iCoordId0 >= 0
      && static_cast<size_t>(this->sgdCoordinate->iCoordId0)
         < this->aiMeshesIndex.size())
  {
    return this->sgdCoordinate->iCoordId0;
  }

  if (pHead != nullptr
      && pHead->VUMeshDesc.iTagSize >= 0
      && static_cast<size_t>(pHead->VUMeshDesc.iTagSize)
         < this->aiMeshesIndex.size())
  {
    return pHead->VUMeshDesc.iTagSize;
  }

  return 0;
}

bool Model::ShouldUseWeightedLoopMesh(SGDPROCUNITHEADER *pHead) const
{
  if (pHead == nullptr || this->s_ppuhVUVN == nullptr || this->sgdCurr == nullptr)
  {
    return false;
  }

  if (!IsWeightedLoopMeshType(pHead->VUMeshDesc.ucMeshType)
      || !IsWeightedLoopVectorType(GetVuvnVectorType(this->s_ppuhVUVN->VUVNDesc)))
  {
    return false;
  }

  const auto pVectorInfo = GetVectorInfoPtr(this->sgdCurr);
  const auto &weighted = pVectorInfo->aAddress[SVA_WEIGHTED];

  return weighted.pVertexList != 0
         && weighted.pvVertex != 0
         && weighted.pvNormal != 0;
}

void Model::HandleMeshDataBlock(SGDPROCUNITHEADER *pHead)
{
  if (!ShouldParseMesh(pHead))
  {
    return;
  }

  auto pProcData = (SGDPROCUNITDATA *) &pHead[1];
  auto *pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[4];

  const bool isPresetMesh = IsPresetMesh(pHead);
  const bool hasPresetColors = isPresetMesh
                               && pHead->VUMeshDesc.MeshType.PRE == 1;
  
  SGDVUMESHSTDATA *sgdMeshData =
      GetMeshSTData(pHead, pProcData, pMeshInfo, isPresetMesh);

  auto offsetVertex = 0;
  auto matIndex = this->FindMaterialIndex(pHead, pProcData);
  auto meshCoordId = this->GetMeshCoordId(pHead);

  auto pVMCD = GetVuMeshColorData(pHead, pProcData);

  for (auto i = 0; i < pHead->VUMeshDesc.ucNumMesh; i++)
  {
    if (isPresetMesh)
    {
      pVMCD = (_SGDVUMESHCOLORDATA *) GetNextUnpackAddr((uint *) pVMCD);
    }

    unsigned int numPoint =
        isPresetMesh ? pVMCD->VifUnpack.NUM : pMeshInfo[i].uiPointNum;

    if (numPoint == 0xc0c0c0c0 || numPoint > 0x1000)
    {
      programLogger->critical("Num points is invalid, something has gone terribly wrong: {:#x}", numPoint);
      break;
    }

    if (numPoint < 3)
    {
      programLogger->warn("Skipping mesh with too few points for triangles: {}",
                          numPoint);

      sgdMeshData = (SGDVUMESHSTDATA *) &sgdMeshData->astData[numPoint];

      if (isPresetMesh)
      {
        pVMCD = (_SGDVUMESHCOLORDATA *) &pVMCD->avColor[pVMCD->VifUnpack.NUM];
      }

      offsetVertex += numPoint;
      continue;
    }

    auto currentMesh = CreateNewMesh(numPoint, matIndex);
    auto meshName = std::string("Mesh_coord_")
                    + std::to_string(meshCoordId)
                    + "_part_"
                    + std::to_string(i)
                    + "_type_"
                    + std::to_string(pHead->VUMeshDesc.ucMeshType);
    currentMesh->mName = aiString(meshName);
    const bool usesWeightedLoopMesh =
        this->ShouldUseWeightedLoopMesh(pHead);
    const bool isExplicitWeightedMesh =
        pHead->VUMeshDesc.MeshType.MULTI == 1
        || pHead->VUMeshDesc.MeshType.VTYPE == SVA_WEIGHTED;
    const bool shouldExportAsWeighted =
        usesWeightedLoopMesh || isExplicitWeightedMesh;
    bool weightedReadFailed = false;
    std::unordered_map<int, float> weightedBoneWeights;
    std::vector<std::vector<std::pair<int, float>>> weightedVertexWeights;

    if (shouldExportAsWeighted)
    {
      weightedVertexWeights.resize(numPoint);
    }

    if (hasPresetColors)
    {
      currentMesh->mColors[0] = new aiColor4D[numPoint];
    }

    for (auto currPointIndex = 0; currPointIndex < numPoint; currPointIndex++)
    {
      Vector3 v {};
      Vector3 n {};

      if (hasPresetColors)
      {
        currentMesh->mColors[0][currPointIndex] = {
            PS2_NEUTRAL_VERTEX_COLOR,
            PS2_NEUTRAL_VERTEX_COLOR,
            PS2_NEUTRAL_VERTEX_COLOR,
            1.0f};
      }
      
      /// MeshType == iMT_0 / iMT_2
      if (pHead->VUMeshDesc.ucMeshType == iMT_0
          || pHead->VUMeshDesc.ucMeshType == iMT_2)
      {
        this->HandleNVLMesh(offsetVertex + currPointIndex, v, n);

        if (hasPresetColors)
        {
          auto color = GetMeshColor(pVMCD, currPointIndex);
          currentMesh->mColors[0][currPointIndex] = ToVertexColor(color);
        }
      }
      /// MeshType = 0x82, VectorType == 0x5
      else if (pHead->VUMeshDesc.MeshType.NVL == true)
      {
        this->HandleNVLMesh(offsetVertex + currPointIndex, v, n);
      }
      /// Weighted/multi-bone mesh. Native MikuPan dispatches 0x42 by MULTI,
      /// even though its VTYPE bits look like SVA_UNIQUE.
      else if (usesWeightedLoopMesh)
      {
        if (!this->HandleWeightedLoopMesh(offsetVertex + currPointIndex,
                                          v,
                                          n,
                                          weightedBoneWeights,
                                          weightedVertexWeights[currPointIndex]))
        {
          weightedReadFailed = true;
          this->HandleUniqueMesh(offsetVertex + currPointIndex, v, n);
        }
      }
      else if (isExplicitWeightedMesh)
      {
        this->HandleWeightedMesh(offsetVertex + currPointIndex,
                                 v,
                                 n,
                                 weightedBoneWeights,
                                 weightedVertexWeights[currPointIndex]);
      }
      /// MeshType == IMT_2F
      else if (pHead->VUMeshDesc.MeshType.FLAT == 1
               && pHead->VUMeshDesc.MeshType.PRE == 1)
      {
        this->HandleFlatMesh(offsetVertex + currPointIndex, i, v, n);

        if (hasPresetColors)
        {
          auto color = GetMeshColor(pVMCD, currPointIndex);
          currentMesh->mColors[0][currPointIndex] = ToVertexColor(color);
        }
      }
      /// VectorType == 0x6
      else if (pHead->VUMeshDesc.MeshType.VTYPE == SVA_UNIQUE)
      {
        this->HandleUniqueMesh(offsetVertex + currPointIndex, v, n);
      }

      currentMesh->mVertices[currPointIndex] = {v.x, v.y, v.z};
      currentMesh->mNormals[currPointIndex] = {n.x, n.y, n.z};
      
      SetupMeshSt(pHead, sgdMeshData, currentMesh, currPointIndex);

      if (currPointIndex >= numPoint - 2)
      {
        continue;
      }

      SetupMeshFace(currentMesh, currPointIndex);
    }

    if (shouldExportAsWeighted && !weightedReadFailed)
    {
      this->AppendWeightedMeshByDominantFace(currentMesh,
                                             weightedVertexWeights,
                                             meshCoordId);
      delete currentMesh;
    }
    else if (currentMesh->mNumFaces > 0)
    {
      if (weightedReadFailed)
      {
        programLogger->warn(
            "Falling back to rigid export for weighted-loop mesh {}",
            currentMesh->mName.C_Str());
      }

      aiMeshesIndex[meshCoordId].push_back(aiMeshes.size());
      aiMeshes.push_back(currentMesh);
    }
    else
    {
      delete currentMesh;
    }

    sgdMeshData = (SGDVUMESHSTDATA *) &sgdMeshData->astData[numPoint];

    if (isPresetMesh)
    {
      pVMCD = (_SGDVUMESHCOLORDATA *) &pVMCD->avColor[pVMCD->VifUnpack.NUM];
    }

    offsetVertex += numPoint;
  }
}

void Model::HandleFlatMesh(int vertexIndex, int normalIndex,
                           Vector3 &vertex, Vector3 &normal)
{
  auto rVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];
  auto vV =
      (Vector3 *) (rVUVNData->VUVNData_Preset.aui
                   + (vertexIndex + s_ppuhVUVN->VUVNDesc.sNumNormal) * 3 + 10);

  vertex = vV[0];
  normal = rVUVNData->VUVNData_Preset.vt2f.avNormal[normalIndex];
}

void Model::HandleNVLMesh(int meshIndex, Vector3 &vertex, Vector3 &normal)
{
  auto pVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];

  vertex = pVUVNData->VUVNData_Preset.avt2[meshIndex].vVertex;
  normal = pVUVNData->VUVNData_Preset.avt2[meshIndex].vNormal;
}

void Model::HandleWeightedMesh(int meshIndex, Vector3 &vertex,
                               Vector3 &normal,
                               std::unordered_map<int, float> &boneWeights,
                               std::vector<std::pair<int, float>>
                                   &vertexWeights)
{
  auto pVUVNDataWeighted3 = (_SGDVUVNDATA_WEIGHTED_3 *) &s_ppuhVUVN[3];
  const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);
  const auto pWeightedVertex3 = RelOffsetToPtr<_SGDVUVNDATA_WEIGHTEDVERTEX_3>(
      sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvVertex);
  const auto pWeightedNormal3 = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvNormal);

  auto wVertex = pWeightedVertex3[pVUVNDataWeighted3[meshIndex].pWeightedVertex];

  auto bone0 = this->GetCoordinateMatrix(wVertex.ucBoneId0);
  auto bone1 = this->GetCoordinateMatrix(wVertex.ucBoneId1);
  auto v0 = Vector3Transform(
      {wVertex.vVertex.x, wVertex.vVertex.y, wVertex.vVertex.z}, bone0);
  auto v1 = Vector3Transform(wVertex.aui, bone1);

  auto w0 = NormalizePS2Weight(wVertex.vVertex.w);
  auto w1 = 1.0f - w0;
  boneWeights[wVertex.ucBoneId0] += w0;
  boneWeights[wVertex.ucBoneId1] += w1;
  vertexWeights.emplace_back(wVertex.ucBoneId0, w0);
  vertexWeights.emplace_back(wVertex.ucBoneId1, w1);

  vertex = {
      v0.x * w0 + v1.x * w1,
      v0.y * w0 + v1.y * w1,
      v0.z * w0 + v1.z * w1};

  auto normalPair =
      &pWeightedNormal3[pVUVNDataWeighted3[meshIndex].pNormal * 2];
  normal = BlendWeightedNormalPair(normalPair, bone0, bone1);
}

bool Model::HandleWeightedLoopMesh(
    int meshIndex,
    Vector3 &vertex,
    Vector3 &normal,
    std::unordered_map<int, float> &boneWeights,
    std::vector<std::pair<int, float>> &vertexWeights)
{
  if (this->s_ppuhVUVN == nullptr || this->sgdCurr == nullptr)
  {
    return false;
  }

  const auto pVectorInfo = GetVectorInfoPtr(this->sgdCurr);
  const auto &weighted = pVectorInfo->aAddress[SVA_WEIGHTED];

  if (weighted.pVertexList == 0 || weighted.pvVertex == 0
      || weighted.pvNormal == 0)
  {
    return false;
  }

  const auto pVectorData = reinterpret_cast<_VECTORDATA *>(&s_ppuhVUVN[3]);
  const auto vertexIndex = pVectorData[meshIndex].vIndex.uiVertexId;
  const auto normalIndex = pVectorData[meshIndex].vIndex.uiNormalId;
  const auto pWeightedVertex =
      RelOffsetToPtr<_SGDVUVNDATA_WEIGHTEDVERTEX_3>(
          this->sgdCurr, weighted.pvVertex);
  const auto pWeightedNormal =
      RelOffsetToPtr<Vector4>(this->sgdCurr, weighted.pvNormal);
  const auto positionList =
      RelOffsetToPtr<_VERTEXLIST>(this->sgdCurr, weighted.pVertexList);
  const auto normalList = GetWeightedNormalList(positionList);

  const auto maxWeightedVertices =
      this->AvailableBytes(pWeightedVertex)
      / sizeof(_SGDVUVNDATA_WEIGHTEDVERTEX_3);
  const auto maxWeightedNormals =
      this->AvailableBytes(pWeightedNormal) / (sizeof(Vector4) * 2);

  if (vertexIndex >= maxWeightedVertices || normalIndex >= maxWeightedNormals)
  {
    return false;
  }

  const auto positionEntry = FindWeightedListEntry(positionList, vertexIndex);
  const auto normalEntry = FindWeightedListEntry(normalList, normalIndex);

  if (positionEntry == nullptr || normalEntry == nullptr)
  {
    return false;
  }

  const auto positionBone0 = positionEntry->sCoordId0;
  const auto positionBone1 = positionEntry->sCoordId1;
  const auto normalBone0 = normalEntry->sCoordId0;
  const auto normalBone1 = normalEntry->sCoordId1;

  if (positionBone0 < 0 || positionBone1 < 0
      || normalBone0 < 0 || normalBone1 < 0
      || static_cast<size_t>(positionBone0) >= this->aiMeshesIndex.size()
      || static_cast<size_t>(positionBone1) >= this->aiMeshesIndex.size()
      || static_cast<size_t>(normalBone0) >= this->aiMeshesIndex.size()
      || static_cast<size_t>(normalBone1) >= this->aiMeshesIndex.size())
  {
    return false;
  }

  const auto &wVertex = pWeightedVertex[vertexIndex];
  auto bone0 = this->GetCoordinateMatrix(positionBone0);
  auto bone1 = this->GetCoordinateMatrix(positionBone1);
  auto v0 = Vector3Transform(
      {wVertex.vVertex.x, wVertex.vVertex.y, wVertex.vVertex.z}, bone0);
  auto v1 = Vector3Transform(wVertex.aui, bone1);
  auto w0 = NormalizePS2Weight(wVertex.vVertex.w);
  auto w1 = 1.0f - w0;

  boneWeights[positionBone0] += w0;
  boneWeights[positionBone1] += w1;
  vertexWeights.emplace_back(positionBone0, w0);
  vertexWeights.emplace_back(positionBone1, w1);

  vertex = {
      v0.x * w0 + v1.x * w1,
      v0.y * w0 + v1.y * w1,
      v0.z * w0 + v1.z * w1};

  auto normalPair = &pWeightedNormal[normalIndex * 2];
  normal = BlendWeightedNormalPair(normalPair,
                                   this->GetCoordinateMatrix(normalBone0),
                                   this->GetCoordinateMatrix(normalBone1));

  return true;
}

void Model::AppendWeightedMeshByDominantFace(
    aiMesh *sourceMesh,
    const std::vector<std::vector<std::pair<int, float>>> &perVertexWeights,
    int fallbackCoordId)
{
  if (sourceMesh == nullptr)
  {
    return;
  }

  std::map<int, std::vector<unsigned int>> facesByCoord;

  for (unsigned int faceIndex = 0; faceIndex < sourceMesh->mNumFaces;
       faceIndex++)
  {
    const auto &face = sourceMesh->mFaces[faceIndex];

    if (face.mNumIndices != 3)
    {
      continue;
    }

    auto coordId = FindDominantFaceBone(face,
                                        perVertexWeights,
                                        fallbackCoordId,
                                        this->aiMeshesIndex.size());
    facesByCoord[coordId].push_back(faceIndex);
  }

  const bool hasTexCoords = sourceMesh->mTextureCoords[0] != nullptr;
  const bool hasColors = sourceMesh->mColors[0] != nullptr;

  for (const auto &[coordId, faceIndices] : facesByCoord)
  {
    if (faceIndices.empty())
    {
      continue;
    }

    auto attachMatrix = this->GetCoordinateMatrix(coordId);
    auto splitMesh = new aiMesh();
    splitMesh->mName = sourceMesh->mName;
    splitMesh->mMaterialIndex = sourceMesh->mMaterialIndex;
    splitMesh->mPrimitiveTypes = aiPrimitiveType_TRIANGLE;
    splitMesh->mNumVertices = static_cast<unsigned int>(faceIndices.size() * 3);
    splitMesh->mVertices = new aiVector3D[splitMesh->mNumVertices];
    splitMesh->mNormals = new aiVector3D[splitMesh->mNumVertices];
    splitMesh->mNumFaces = static_cast<unsigned int>(faceIndices.size());
    splitMesh->mFaces = new aiFace[splitMesh->mNumFaces];

    if (hasTexCoords)
    {
      splitMesh->mTextureCoords[0] =
          new aiVector3D[splitMesh->mNumVertices];
      splitMesh->mNumUVComponents[0] = sourceMesh->mNumUVComponents[0];
    }

    if (hasColors)
    {
      splitMesh->mColors[0] = new aiColor4D[splitMesh->mNumVertices];
    }

    unsigned int outVertex = 0;

    for (unsigned int outFace = 0; outFace < faceIndices.size(); outFace++)
    {
      const auto &sourceFace = sourceMesh->mFaces[faceIndices[outFace]];
      auto &targetFace = splitMesh->mFaces[outFace];
      targetFace.mNumIndices = 3;
      targetFace.mIndices = new unsigned int[3];

      for (unsigned int corner = 0; corner < 3; corner++)
      {
        const auto sourceVertex = sourceFace.mIndices[corner];
        targetFace.mIndices[corner] = outVertex;

        Vector3 vertex = {
            sourceMesh->mVertices[sourceVertex].x,
            sourceMesh->mVertices[sourceVertex].y,
            sourceMesh->mVertices[sourceVertex].z};
        vertex = InverseTransformPoint(vertex, attachMatrix);
        splitMesh->mVertices[outVertex] = {vertex.x, vertex.y, vertex.z};

        Vector3 normal = {
            sourceMesh->mNormals[sourceVertex].x,
            sourceMesh->mNormals[sourceVertex].y,
            sourceMesh->mNormals[sourceVertex].z};
        normal = InverseTransformDirection(normal, attachMatrix);
        Vector3Normalize(normal);
        splitMesh->mNormals[outVertex] = {normal.x, normal.y, normal.z};

        if (hasTexCoords)
        {
          splitMesh->mTextureCoords[0][outVertex] =
              sourceMesh->mTextureCoords[0][sourceVertex];
        }

        if (hasColors)
        {
          splitMesh->mColors[0][outVertex] =
              sourceMesh->mColors[0][sourceVertex];
        }

        outVertex++;
      }
    }

    this->aiMeshesIndex[coordId].push_back(this->aiMeshes.size());
    this->aiMeshes.push_back(splitMesh);
  }
}

void Model::HandleUniqueMesh(int meshIndex, Vector3 &vertex, Vector3 &normal)
{
  auto pVectorData = (_VECTORDATA  *) &s_ppuhVUVN[3];
  const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);

  const auto pSVAUniqueVertex = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvVertex);

  const auto pSVAUniqueNormal = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvNormal);

  auto wVertex =
      pSVAUniqueVertex[pVectorData[meshIndex].vIndex.uiVertexId];

  vertex = {wVertex.x, wVertex.y, wVertex.z};

  auto n = pSVAUniqueNormal[pVectorData[meshIndex].vIndex.uiNormalId];

  normal = {n.x, n.y, n.z};
}

Matrix4x4 Model::GetCoordinateMatrix(int iCoordId)
{
  const auto coord = this->GetCurrentCoordinate();
  
  if (iCoordId == -1)
  {
    iCoordId = 0;
  }

  if (this->isCharacterModel)
  {
    if (this->isFF1Layout)
    {
      if (coord == GetCoordinatePtr(this->sgdTop)
          && iCoordId >= 0
          && static_cast<size_t>(iCoordId)
             < this->ff1NoScaleCoordinateWorld.size())
      {
        return this->ff1NoScaleCoordinateWorld[iCoordId];
      }

      return StripCoordinateScale(*(Matrix4x4 *) &coord[iCoordId].matLocalWorld);
    }

    return *(Matrix4x4 *) &coord[iCoordId].matCoord;
  }

  /// Right way of doing it but the model ends up too big for blender
  return *(Matrix4x4 *) &coord[iCoordId].matLocalWorld;
  //return *(Matrix4x4 *) &coord[iCoordId].matCoord;
}

aiMatrix4x4 Model::GetGlobalTransform(aiNode* node)
{
  aiMatrix4x4 global = node->mTransformation;
  while (node->mParent)
  {
    node = node->mParent;
    global = node->mTransformation * global;
  }
  return global;
}
