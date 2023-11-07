#include "Model.h"
#include "assimp/postprocess.h"
#include "gra3dSGDData.h"
#include "packfile.h"
#include "render/tim2.h"
#include "utils/assimp_utils.h"
#include "utils/logging.h"
#include "utils/utility.h"

Model::Model(std::filesystem::path filename)
{
  this->pakFile = (PK2_HEAD *) ReadFullFile(filename);
  this->scene = new aiScene();
  this->isCharacterModel = filename.extension() == ".mdl";
  this->exportFolder = std::filesystem::current_path()
                       / filename.filename().replace_extension("");
  this->exportFilename =
      filename.filename().replace_extension(".dae").filename();

  std::filesystem::create_directories(exportFolder);
}

void Model::ExtractModel()
{
  auto mdlPak = (PK2_HEAD *) GetFileInPak(this->pakFile, 0);

  if (!isCharacterModel)
  {
    this->sgdTop = (SGDFILEHEADER *) mdlPak;
  }
  else
  {
    this->sgdTop = (SGDFILEHEADER *) GetFileInPak(mdlPak, 0);
  }

  this->sgdCurr = this->sgdTop;

  if (isCharacterModel)
  {
    this->ReadTextures();
  }

  this->CreateModelNodes();
  this->CalculateBoneTransforms();
  this->ReadSGD(mdlPak);
  this->BuildScene();

  auto exporterOptions =
      aiProcess_ValidateDataStructure | aiProcess_EmbedTextures;

  if (!this->isCharacterModel)
  {
    exporterOptions |=
        aiProcess_OptimizeGraph | aiProcess_OptimizeMeshes | aiProcess_Debone;
  }
  else
  {
    exporterOptions |=
        aiProcess_LimitBoneWeights | aiProcess_Triangulate
        | aiProcess_PopulateArmatureData | aiProcess_JoinIdenticalVertices
        | aiProcess_FixInfacingNormals | aiProcess_GenBoundingBoxes
        | aiProcess_GenSmoothNormals | aiProcess_ForceGenNormals;
  }

  ExportScene(exportFolder / this->exportFilename, "gltf2", scene,
              exporterOptions);
}

void Model::BuildScene()
{
  this->Model::ConvertToNodeBinaryTree();
  this->scene->mNumMeshes = this->aiMeshes.size();
  this->scene->mMeshes = this->aiMeshes.data();
  this->scene->mNumMaterials = this->aiMaterials.size();
  this->scene->mMaterials = this->aiMaterials.data();
  this->scene->mNumTextures = this->aiTextures.size();
  this->scene->mTextures = this->aiTextures.data();
}

void Model::ConvertToNodeBinaryTree()
{
  this->scene->mRootNode = aiNodes[0];
  for (auto i = 0; i < aiNodes.size(); i++)
  {
    aiNodes[i]->mNumMeshes = aiMeshesIndex[i].size();
    aiNodes[i]->mMeshes = aiMeshesIndex[i].data();

    std::vector<aiNode *> children;
    for (auto j = 0; j < aiNodes.size(); j++)
    {
      if (aiNodes[j]->mParent == aiNodes[i] && j != i)
      {
        children.push_back(aiNodes[j]);
      }
    }

    aiNodes[i]->mNumChildren = children.size();
    aiNodes[i]->mChildren = new aiNode *[children.size()];

    for (auto j = 0; j < children.size(); j++)
    {
      aiNodes[i]->mChildren[j] = children[j];
    }

    for (auto m : aiMeshesIndex[i])
    {
      if (!this->isCharacterModel)
      {
        break;
      }

      if (aiMeshes[m]->HasBones())
      {
        continue;
      }

      auto extraBones = 1;
      auto hasExtraBone = false;
      auto extraBoneIndex = 0;

      // Checks if it is a multi-bone mesh
      for (; extraBoneIndex < aiMultiBoneMeshes.size(); extraBoneIndex++)
      {
        if (aiMultiBoneMeshes[extraBoneIndex].meshIndex == m)
        {
          extraBones++;
          hasExtraBone = true;
          break;
        }
      }

      aiMeshes[m]->mNumBones =
          extraBones;//GetNumberOfParents(aiNodes[i]) + extraBones;
      aiMeshes[m]->mBones = new aiBone *[aiMeshes[m]->mNumBones];

      auto parentIdList = new int[aiMeshes[m]->mNumBones];
      parentIdList[0] = i;

      // Finds the list of parents ID for the current mesh
      auto currentNode = aiNodes[i];
      for (auto l = 1; l < aiMeshes[m]->mNumBones; l++)
      {
        if (hasExtraBone && l == aiMeshes[m]->mNumBones - 1)
        {
          parentIdList[l] = aiMultiBoneMeshes[extraBoneIndex].boneIndex;
          break;
        }

        auto parentName = currentNode->mParent->mName;
        for (auto ll = 0; ll < aiNodes.size(); ll++)
        {
          if (aiNodes[ll]->mName == parentName)
          {
            currentNode = aiNodes[ll];
            parentIdList[l] = ll;
            break;
          }
        }
      }

      for (auto k = 0; k < aiMeshes[m]->mNumBones; k++)
      {
        aiMeshes[m]->mBones[k] = new aiBone();
        aiMeshes[m]->mBones[k]->mName =
            aiString(aiNodes[parentIdList[k]]->mName);

        auto coordinateMatrix = this->GetCoordinateMatrix(parentIdList[k]);
        auto inverseBoneMatrix = aiMatrix4x4(*(aiMatrix4x4 *) &coordinateMatrix)
                                     .Inverse()
                                     .Transpose();

        aiMeshes[m]->mBones[k]->mOffsetMatrix = inverseBoneMatrix;
        aiMeshes[m]->mBones[k]->mNumWeights = aiMeshes[m]->mNumVertices;
        aiMeshes[m]->mBones[k]->mWeights =
            new aiVertexWeight[aiMeshes[m]->mNumVertices];

        for (auto j = 0; j < aiMeshes[m]->mNumVertices; j++)
        {
          aiMeshes[m]->mBones[k]->mWeights[j].mVertexId = j;
          aiMeshes[m]->mBones[k]->mWeights[j].mWeight = 0.0f;

          if (hasExtraBone)
          {
            aiMeshes[m]->mBones[k]->mWeights[j].mWeight =
                1.0f - aiMultiBoneMeshes[extraBoneIndex].weight;
          }

          if (hasExtraBone && k == aiMeshes[m]->mNumBones - 1)
          {
            aiMeshes[m]->mBones[k]->mWeights[j].mWeight =
                aiMultiBoneMeshes[extraBoneIndex].weight;
          }
        }
      }
    }
  }
}

void Model::ReadTextures()
{
  if (pakFile->pack_num <= 1)
  {
    return;
  }

  auto texturePak = (PK2_HEAD *) GetFileInPak(pakFile, 1);

  if (!this->isCharacterModel)
  {
    texturePak = (PK2_HEAD *) Pk2GetAddr(pakFile, 1);
  }

  for (auto i = 0; i < texturePak->pack_num; i++)
  {
    auto tim2 = (TIM2_FILEHEADER *) GetFileInPak(texturePak, i);

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
    textures.emplace_back(img);
  }
}

int Model::FindMaterialIndex(SGDPROCUNITDATA *pProcData)
{
  auto pMaterial =
      GetMaterialPtr(this->sgdCurr, this->sgdMaterial->iMaterialIndex);
  auto materialName = GetMaterialStrName(pMaterial);

  int matIndex = -1;
  auto currentMaterial =
      FindMaterial(this->aiMaterials, materialName, &matIndex);

  if (currentMaterial == nullptr)
  {
    matIndex = this->ReadTex0TextureIndex(pProcData, materialName);
  }

  return matIndex;
}

int Model::ReadTex0TextureIndex(SGDPROCUNITDATA *pProcData,
                                std::string materialName)
{
  auto mesh_tex_reg = RelOffsetToPtr<sceGsTex0>(pProcData, 0x18);
  auto matIndex = this->aiMaterials.size();
  Texture *t = nullptr;

  for (auto v : textures)
  {
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

  sgdCalcBoneCoordinate(sgdTop, coord, this->sgdTop->uiNumBlock - 1);

  for (auto i = 0; i < aiNodes.size(); i++)
  {
    this->aiNodes[i]->mParent =
        coord[i].pParent != -1 ? aiNodes[coord[i].pParent] : nullptr;

    if (this->aiNodes[i]->mParent == nullptr)
    {
      this->aiNodes[i]->mTransformation = aiMatrix4x4();
      continue;
    }

    auto matCoord = this->GetCoordinateMatrix(i);
    auto matCoordParent = this->GetCoordinateMatrix(coord[i].pParent);

    auto aiMat = aiMatrix4x4(*(aiMatrix4x4 *) &matCoord);
    auto aiMatParent = aiMatrix4x4(*(aiMatrix4x4 *) &matCoordParent);

    this->aiNodes[i]->mTransformation =
        aiMatParent.Inverse().Transpose() * aiMat.Transpose();
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

  for (auto i = 0; i < mdlPak->pack_num; i++)
  {
    sgdCurr = (SGDFILEHEADER *) GetFileInPak(mdlPak, i);
    sgdRemap(sgdCurr);
    TraverseProcUnit(sgdCurr);
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
  //auto v4 = RelOffsetToPtr<Vector4>(pHead, 0x10);
  //int numPts = (int)(((int)pHead->pNext - (int)v4) / 16);
  //const auto mat = GetCurrentCoordinate()[sgdCoordintate->iCoordId0].matCoord;
  //for (int i = 0; i < 8; i++)
  //{
  //    boundingBox[i] = Vector3Transform(Vector3{v4[i].x, v4[i].y, v4[i].z}, mat);
  //}
}

void Model::HandleGsImageDataBlock(SGDPROCUNITHEADER *pHead)
{
  auto sgdGsImage =
      RelOffsetToPtr<SGDGSIMAGEDESC>(&pHead[1], pHead->TexDesc.iPaddingSize);
}

void Model::HandleTri2DataBlock(SGDPROCUNITHEADER *pHead)
{
  auto pTRI2HeadTop =
      RelOffsetToPtr<SGDTRI2FILEHEADER>(&pHead[1], pHead->TexDesc.iPaddingSize);
  auto rTexDesc = &pHead->TexDesc;

  for (auto i = 0; i < rTexDesc->iNumTexture; i++)
  {
    int image_h = pTRI2HeadTop->gsli.trxreg.RRH;
    int image_w = pTRI2HeadTop->gsli.trxreg.RRW;
    auto data_size = image_w * image_h;
    auto numColors = 0;
    auto clutType = NO_CLUT;
    auto clutColorType = RGBA16;
    auto image_color_index_off = 0;

    switch (pTRI2HeadTop->gsli.bitbltbuf.DPSM)
    {
      case PSMT4:
        clutType = IDTEX4;
        clutColorType = RGBA32;
        numColors = 16;
        image_color_index_off = data_size >> 1;
        break;
      case PSMT8H:
      case PSMT8:
        clutType = IDTEX8;
        clutColorType = RGBA32;
        numColors = 256;
        image_color_index_off = data_size;
        break;
      case PSMCT32:
        clutType = NO_CLUT;
        clutColorType = RGBA32;
        numColors = 0;
        image_color_index_off = 0;
        image_h = image_w;
        data_size = image_w * image_w;
        break;
    }

    auto image_color_index = RelOffsetToPtr<uint8_t>(&pTRI2HeadTop[1], 0);
    auto image_color_data = RelOffsetToPtr<uint8_t>(
        &image_color_index[image_color_index_off], sizeof(sceGsLoadImage));
    auto image_data = new std::vector<unsigned int>(data_size);

    for (auto x = 0; x < image_w; x++)
    {
      for (auto y = 0; y < image_h; y++)
      {
        if (pTRI2HeadTop->gsli.bitbltbuf.DPSM == PSMCT32)
        {
          auto image_offset = x + y * image_w;
          unsigned char r, g, b, a;
          r = image_color_index[image_offset * 4 + 0];
          g = image_color_index[image_offset * 4 + 1];
          b = image_color_index[image_offset * 4 + 2];
          a = image_color_index[image_offset * 4 + 3];

          image_data->data()[image_offset] =
              (unsigned int) ((a << 24) | (b << 16) | (g << 8) | r);
        }
        else
        {
          auto image_offset = x + y * image_w;
          auto index = Tim2GetTexel(image_color_index, x, y, image_w, clutType);
          image_data->data()[image_offset] = Tim2GetClutColor(
              image_color_data, clutType, clutColorType, numColors, 0, index);
        }
      }
    }

    this->textures.emplace_back(
        CreateTextureFromRawData(image_w, image_h, image_data->data(),
                                 pTRI2HeadTop->gsli.bitbltbuf.DBP));

    pTRI2HeadTop = RelOffsetToPtr<SGDTRI2FILEHEADER>(
        &pTRI2HeadTop->gsli, pTRI2HeadTop->uiVif1Code_DIRECT.size * 0x10);
  }
}

void Model::HandleMeshDataBlock(SGDPROCUNITHEADER *pHead)
{
  SGDVUMESHPOINTNUM *pMeshInfo;

  if (pHead->VUMeshDesc.ucMeshType == 0)
  {
    return;
  }
  else if (pHead->VUMeshDesc.ucMeshType == 0x80)
  {
    // This just adds a triangle below the character, probably for getting floor coordinates of the model
    pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[2];
    return;
  }
  else
  {
    pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[4];
  }

  auto pProcData = (SGDPROCUNITDATA *) &pHead[1];

  SGDVUMESHSTDATA *sgdMeshData;

  auto isIMT_2 = pHead->VUMeshDesc.ucMeshType == iMT_2F
                 || pHead->VUMeshDesc.ucMeshType == iMT_2;

  if (isIMT_2)
  {
    sgdMeshData = RelOffsetToPtr<SGDVUMESHSTDATA>(
        pProcData, (pProcData->VUMeshData_Preset.sOffsetToST - 1) * 4);
  }
  else
  {
    /// For a mesh order is SGDVUMESHPOINTNUM -> SGDVUMESHSTREGSET -> SGDVUMESHSTDATA
    auto sgdVuMeshStRegSet =
        (SGDVUMESHSTREGSET *) &pMeshInfo[pHead->VUMeshDesc.ucNumMesh];
    sgdMeshData = (SGDVUMESHSTDATA *) &sgdVuMeshStRegSet->auiVifCode[3];
  }

  auto offsetVertex = 0;
  auto matIndex = this->FindMaterialIndex(pProcData);

  auto pVMCD =
      (_SGDVUMESHCOLORDATA *) (&pHead->pNext
                               + pProcData->VUMeshData_Preset.sOffsetToPrim);

  for (auto i = 0; i < pHead->VUMeshDesc.ucNumMesh; i++)
  {
    if (isIMT_2)
    {
      pVMCD = (_SGDVUMESHCOLORDATA *) GetNextUnpackAddr((uint *) pVMCD);
    }

    unsigned int numPoint;

    numPoint =
        isIMT_2 ? pVMCD->VifUnpack.NUM : pMeshInfo[i].uiPointNum;

    if (numPoint == 0)
    {
      continue;
    }

    auto currentMesh = CreateNewMesh(numPoint, matIndex);

    if (isIMT_2)
    {
      currentMesh->mColors[0] = new aiColor4D[numPoint];
    }

    for (auto currPointIndex = 0; currPointIndex < numPoint; currPointIndex++)
    {
      Vector3 v {};
      Vector3 n {};

      /// MeshType == IMT_2
      if (pHead->VUMeshDesc.ucMeshType == iMT_2)
      {
        this->HandleNVLMesh(offsetVertex + currPointIndex, v, n);

        auto color = pVMCD->avColor[currPointIndex];
        Vector3Normalize(color);
        currentMesh->mColors[0][currPointIndex] = {color.x, color.y, color.z,
                                                   0.0f};
      }
      /// VectorType == 0x5
      else if (pHead->VUMeshDesc.MeshType.NVL == true)
      {
        this->HandleNVLMesh(offsetVertex + currPointIndex, v, n);
      }
      /// VectorType == 0x6
      else if (pHead->VUMeshDesc.MeshType.VTYPE == SVA_WEIGHTED)
      {
        this->HandleWeightedMesh(offsetVertex + currPointIndex, currPointIndex,
                                 v, n, currentMesh);
      }
      /// MeshType == IMT_2F
      else if (pHead->VUMeshDesc.MeshType.FLAT == 1
               && pHead->VUMeshDesc.MeshType.PRE == 1)
      {
        this->HandleFlatMesh(offsetVertex + currPointIndex, v, n);

        auto color = pVMCD->avColor[currPointIndex];
        Vector3Normalize(color);
        currentMesh->mColors[0][currPointIndex] = {color.x, color.y, color.z,
                                                   0.0f};
      }
      /// VectorType == 0x6
      else if (pHead->VUMeshDesc.MeshType.VTYPE == SVA_UNIQUE)
      {
        this->HandleUniqueMesh(offsetVertex + currPointIndex, v, n);
      }

      currentMesh->mVertices[currPointIndex] = {v.x, v.y, v.z};
      currentMesh->mNormals[currPointIndex] = {n.x, n.y, n.z};

      if (pHead->VUMeshDesc.MeshType.TEX == true)
      {
        /// Sometimes the value is 0x1, so using the previous value seems to work
        /// If this is removed, it break the entire texture mapping UV
        if (((Vector2i *) (sgdMeshData->astData))[currPointIndex].y == 0x1)
        {
          sgdMeshData->astData[currPointIndex].fT =
              sgdMeshData->astData[currPointIndex - 2].fT;
        }

        /// Need to subtract to compensate for the png loader flipping the Y-axis
        currentMesh->mTextureCoords[0][currPointIndex] = {
            sgdMeshData->astData[currPointIndex].fS,
            1.0f - sgdMeshData->astData[currPointIndex].fT, 0.0f};
      }

      if (currPointIndex >= numPoint - 2)
      {
        continue;
      }

      SetupMeshFace(currentMesh, currPointIndex);
    }

    if (pHead->VUMeshDesc.MeshType.VTYPE != SVA_WEIGHTED)
    {
      aiMeshesIndex[this->sgdCoordinate->iCoordId0].push_back(aiMeshes.size());
    }

    sgdMeshData = (SGDVUMESHSTDATA *) &sgdMeshData->astData[numPoint];

    if (isIMT_2)
    {
      pVMCD = (_SGDVUMESHCOLORDATA *) &pVMCD->avColor[pVMCD->VifUnpack.NUM];
    }

    offsetVertex += numPoint;
    aiMeshes.push_back(currentMesh);
  }
}

void Model::HandleFlatMesh(int meshIndex, Vector3 &vertex, Vector3 &normal)
{
  auto rVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];
  auto vV =
      (Vector3 *) (rVUVNData->VUVNData_Preset.aui
                   + (meshIndex + s_ppuhVUVN->VUVNDesc.sNumNormal) * 3 + 10);

  vertex = vV[0];
  normal = rVUVNData->VUVNData_Preset.vt2f.avNormal[meshIndex];
  vertex = Vector3Transform(
      vertex, this->GetCoordinateMatrix(this->sgdCoordinate->iCoordId0));
}

void Model::HandleNVLMesh(int meshIndex, Vector3 &vertex, Vector3 &normal)
{
  auto pVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];

  vertex = pVUVNData->VUVNData_Preset.avt2[meshIndex].vVertex;
  normal = pVUVNData->VUVNData_Preset.avt2[meshIndex].vNormal;

  vertex = Vector3Transform(
      vertex, this->GetCoordinateMatrix(this->sgdCoordinate->iCoordId0));
}

void Model::HandleWeightedMesh(int meshIndex, int currentPoint, Vector3 &vertex,
                               Vector3 &normal, aiMesh *mesh)
{
  auto pVUVNDataWeighted3 = (_SGDVUVNDATA_WEIGHTED_3 *) &s_ppuhVUVN[3];
  const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);
  const auto pWeightedVertex3 = RelOffsetToPtr<_SGDVUVNDATA_WEIGHTEDVERTEX_3>(
      sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvVertex);
  const auto pWeightedNormal3 = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvNormal);

  auto wVertex =
      pWeightedVertex3[pVUVNDataWeighted3[meshIndex].pWeightedVertex];

  auto v0 = Vector3Transform(
      {wVertex.vVertex.x, wVertex.vVertex.y, wVertex.vVertex.z},
      this->GetCoordinateMatrix(wVertex.ucBoneId0));

  auto v1 = Vector3Transform(wVertex.aui,
                             this->GetCoordinateMatrix(wVertex.ucBoneId1));

  auto w1 = 255 - wVertex.vVertex.w;

  vertex = (v0 * (wVertex.vVertex.w / 255)) + (v1 * (w1 / 255));

  auto n = pWeightedNormal3[pVUVNDataWeighted3[meshIndex].pNormal];

  normal = {n.x, n.y, n.z};

  if (currentPoint == 0)
  {
    aiMeshesIndex[wVertex.ucBoneId0].push_back(aiMeshes.size());
    aiMultiBoneMeshes.push_back(
        {(int) aiMeshes.size(), wVertex.ucBoneId1, wVertex.vVertex.w});
  }
}

void Model::HandleUniqueMesh(int meshIndex, Vector3 &vertex, Vector3 &normal)
{
  auto pVUVNDataWeighted3 = (_SGDVUVNDATA_WEIGHTED_3 *) &s_ppuhVUVN[3];
  const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);

  const auto pSVAUniqueVertex = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvVertex);

  const auto pSVAUniqueNormal = RelOffsetToPtr<Vector4>(
      sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvNormal);

  auto wVertex =
      pSVAUniqueVertex[pVUVNDataWeighted3[meshIndex].pWeightedVertex];

  vertex = {wVertex.x, wVertex.y, wVertex.z};

  vertex = Vector3Transform(
      vertex, this->GetCoordinateMatrix(this->sgdCoordinate->iCoordId0));

  auto n = pSVAUniqueNormal[pVUVNDataWeighted3[meshIndex].pNormal];

  normal = {n.x, n.y, n.z};
}

Matrix4x4 Model::GetCoordinateMatrix(int iCoordId)
{
  const auto coord = this->GetCurrentCoordinate();

  if (this->isCharacterModel)
  {
    return *(Matrix4x4 *) &coord[iCoordId].matCoord;
  }

  return *(Matrix4x4 *) &coord[iCoordId].matLocalWorld;
}