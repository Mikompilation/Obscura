#include "sgdMdl.h"
#include "game/packfile.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "stb_write_image.h"
#include "tim2.h"
#include <filesystem>
#include <fstream>
#include <vector>

std::vector<Texture *> textures;
std::map<std::string, Mesh> meshes;
std::vector<Mesh> vectorMeshes;
SGDFILEHEADER *sgdTop;
SGDFILEHEADER *sgdCurr;
SGDPROCUNITHEADER *s_ppuhVUVN;
SGDCOORDINATEDESC *sgdCoordintate;
SGDVUMATERIALDESC *sgdMaterial;
int image_id = 0;

void DisplayFF2Model(const char *filename) {
    auto pakFile = (PK2_HEAD *) ReadFullFile(filename);
    auto mdlPak = (PK2_HEAD *) GetFileInPak(pakFile, 0);
    auto texturePak = (PK2_HEAD *) GetFileInPak(pakFile, 1);
    sgdTop = (SGDFILEHEADER *) GetFileInPak(mdlPak, 0);

    if (pakFile->pack_num != 1) {
        if (mdlPak->pack_num == SGD_VALID_VERSIONID) {
            texturePak = (PK2_HEAD *) Pk2GetAddr(pakFile, 1);
        }

        for (auto i = 0; i < texturePak->pack_num; i++) {
            auto tim2 = (TIM2_FILEHEADER *) GetFileInPak(texturePak, i);

            if (tim2 == nullptr || ((int64_t) tim2 & 0xf) != 0) {
                printf("Found broken model with badly alligned textures");
                break;
            }

            auto convertedTim2 = LoadTim2Texture(tim2);
            auto img = CreateTextureFromRawData(convertedTim2->Width, convertedTim2->Height, convertedTim2->image);
            textures.emplace_back(img);
        }
    }

    if (mdlPak->pack_num == SGD_VALID_VERSIONID) {
        sgdTop = (SGDFILEHEADER *) mdlPak;
        sgdCurr = (SGDFILEHEADER *) mdlPak;
        sgdRemap(sgdCurr);
        HandleProcUnit(sgdCurr);
    }
    else {
        for (auto i = 0; i < mdlPak->pack_num; i++) {
            sgdCurr = (SGDFILEHEADER *) GetFileInPak(mdlPak, i);
            sgdRemap(sgdCurr);
            HandleProcUnit(sgdCurr);
        }
    }

    auto index = 0;
    for (auto m: meshes) {
        if (index < textures.size()) {
            m.second.textures.emplace_back(textures[index]);
            vectorMeshes.emplace_back(m.second);
        } else {
            vectorMeshes.emplace_back(m.second);
        }

        index += 1;
    }

    InitVisualizer();
    DrawTriangleMeshes(vectorMeshes);
    RunVisualizer();
}

void HandleProcUnit(SGDFILEHEADER *sgd) {
    for (int i = 0; i < sgd->uiNumBlock; i++) {
        PrintBlockBeginning(i);

        SGDPROCUNITHEADER *pHead = GetTopProcUnitHeaderPtr(sgd, i);

        if (pHead == (SGDPROCUNITHEADER *) nullptr) {
            PrintEmptyBlock();
        }

        while (pHead != (SGDPROCUNITHEADER *) nullptr && ((int64_t) pHead & 0xf) == 0) {
            PrintBlockInfo(pHead, sgd);

            SgSortUnitPrim(pHead);

            pHead = GetNextProcUnitHeaderPtr(pHead);
        }

        PrintBlockEnding(i);
    }

    sgdCoordintate = nullptr;
}

void SgSortUnitPrim(SGDPROCUNITHEADER *pHead) {
    switch (pHead->iCategory) {
        case VUVN:
            HandleVUVNDataBlock(pHead);
            break;
        case MESH:
            HandleMeshDataBlock(pHead);
            break;
        case MATERIAL:
            HandleMaterialDataBlock(pHead);
            break;
        case COORDINATE:
            HandleCoordinateDataBlock(pHead);
            break;
        case BOUNDING_BOX:
            HandleBoundingBoxDataBlock(pHead);
            break;
        case GS_IMAGE:
            HandleGsImageDataBlock(pHead);
            break;
        case TRI2:
            HandleTri2DataBlock(pHead);
            break;
        default:
            return;
    }
}

void HandleVUVNDataBlock(SGDPROCUNITHEADER *pHead) {
    s_ppuhVUVN = pHead;
}

void HandleMeshDataBlock(SGDPROCUNITHEADER *pHead) {
    SGDVUMESHPOINTNUM *pMeshInfo;

    if (pHead->VUMeshDesc.ucMeshType == 0x80) {
        // This just adds a triangle below the character
        pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[2];
        return;
    } else {
        pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[4];
    }

    auto pMaterial = GetMaterialPtr(sgdCurr, sgdMaterial->iMaterialIndex);
    auto materialName = GetMaterialStrName(pMaterial);
    auto pProcData = (SGDPROCUNITDATA *) &pHead[1];

    SGDVUMESHSTDATA *sgdMeshData;

    if (pHead->VUMeshDesc.MeshType.FLAT == true && pHead->VUMeshDesc.MeshType.PRE == true) {
        sgdMeshData = RelOffsetToPtr<SGDVUMESHSTDATA>(pProcData, (pProcData->VUMeshData_Preset.sOffsetToST - 1) * 4);
    } else {
        /// For a mesh order is SGDVUMESHPOINTNUM -> SGDVUMESHSTREGSET -> SGDVUMESHSTDATA
        auto sgdVuMeshStRegSet = (SGDVUMESHSTREGSET *) &pMeshInfo[pHead->VUMeshDesc.ucNumMesh];
        sgdMeshData = (SGDVUMESHSTDATA *) &sgdVuMeshStRegSet->auiVifCode[3];
    }

    auto offsetVertex = 0;

    Mesh *mesh;

    if (meshes.find(materialName) == meshes.end()) {
        meshes[materialName] = Mesh();
        mesh = &meshes[materialName];

        mesh->diffuse.push_back(pMaterial->vDiffuse);
        mesh->ambient.push_back(pMaterial->vAmbient);
        mesh->specular.push_back(pMaterial->vSpecular);
        mesh->mesh_name.push_back(materialName);
    } else {
        mesh = &meshes[materialName];
    }

    auto pVMCD = (_SGDVUMESHCOLORDATA *) (&pHead->pNext + pProcData->VUMeshData_Preset.sOffsetToPrim);

    for (auto i = 0; i < pHead->VUMeshDesc.ucNumMesh; i++) {
        if (pHead->VUMeshDesc.ucMeshType == iMT_2F || pHead->VUMeshDesc.ucMeshType == iMT_2) {
            pVMCD = (_SGDVUMESHCOLORDATA *) GetNextUnpackAddr((uint *) pVMCD);
        }

        unsigned int numPoint;

        if (pHead->VUMeshDesc.ucMeshType == iMT_2F || pHead->VUMeshDesc.ucMeshType == iMT_2) {
            numPoint = pVMCD->VifUnpack.NUM;
        } else {
            numPoint = pMeshInfo[i].uiPointNum;
        }

        for (auto currPointIndex = 0; currPointIndex < numPoint; currPointIndex++) {
            Vector3 v{};
            Vector3 n{};

            /// VectorType == 0x5
            if (pHead->VUMeshDesc.MeshType.NVL == true || pHead->VUMeshDesc.ucMeshType == iMT_2) {
                HandleNVLMesh(offsetVertex + currPointIndex, v, n);
            }
                /// VectorType == 0x6
            else if (pHead->VUMeshDesc.MeshType.VTYPE == SVA_WEIGHTED) {
                HandleWeightedMesh(offsetVertex + currPointIndex, v, n);
            } else if (pHead->VUMeshDesc.MeshType.FLAT == 1 && pHead->VUMeshDesc.MeshType.PRE == 1) {
                HandleFlatMesh(offsetVertex + currPointIndex, v, n);
            }
                /// VectorType == 0x6
            else if (pHead->VUMeshDesc.MeshType.VTYPE == SVA_UNIQUE) {
                HandleUniqueMesh(offsetVertex + currPointIndex, v, n);
            }

            mesh->vertices.emplace_back(v);
            mesh->vertex_normals.emplace_back(n);

            if (pHead->VUMeshDesc.MeshType.TEX == true) {
                if (((Vector2i *) (sgdMeshData->astData))[currPointIndex].y == 0x1) {
                    sgdMeshData->astData[currPointIndex].fT = sgdMeshData->astData[currPointIndex - 2].fT;
                }

                /// Need to substract to compensate for the png loader flipping the Y-axis
                mesh->uv.push_back(
                        {sgdMeshData->astData[currPointIndex].fS, 1.0f - sgdMeshData->astData[currPointIndex].fT});
            }

            if (currPointIndex >= numPoint - 2) {
                continue;
            }

            mesh->triangle_material_id.emplace_back(sgdMaterial->iMaterialIndex);

            int triangleOffset = mesh->vertices.size() - 1;

            if (currPointIndex % 2 == 0) {
                mesh->triangles.push_back(
                        {triangleOffset, triangleOffset + 1, triangleOffset + 2});
            } else {
                mesh->triangles.push_back(
                        {triangleOffset + 1, triangleOffset, triangleOffset + 2});
            }
        }

        sgdMeshData = RelOffsetToPtr<SGDVUMESHSTDATA>(sgdMeshData, sizeof(SGDVUMESHST) * numPoint + 4);

        if (pHead->VUMeshDesc.ucMeshType == iMT_2F || pHead->VUMeshDesc.ucMeshType == iMT_2) {
            pVMCD = (_SGDVUMESHCOLORDATA *) &pVMCD->avColor[pVMCD->VifUnpack.NUM];
        }

        offsetVertex += numPoint;
    }
}

void HandleMaterialDataBlock(SGDPROCUNITHEADER *pHead) {
    sgdMaterial = &pHead->VUMaterialDesc;
}

void HandleCoordinateDataBlock(SGDPROCUNITHEADER *pHead) {
    sgdCoordintate = &pHead->CoordDesc;
}

void HandleBoundingBoxDataBlock(SGDPROCUNITHEADER *pHead) {
    /*
      auto* v4 = (Vector4*)((int)pHead + 0x10);

      int numPts = (int)(((int)pHead->pNext - (int)v4) / 16);

      // Creates the bounding boxes
      for (int i = 0; i < numPts; i++)
      {
          Vector3 v3 = Vector3{v4[i].x, v4[i].y, v4[i].z};

          //points.push_back(v3);
      }
       */
}

void HandleGsImageDataBlock(SGDPROCUNITHEADER *pHead) {
}

void HandleTri2DataBlock(SGDPROCUNITHEADER *pHead) {
    return;
    auto sgdTri2 = RelOffsetToPtr<SGDTRI2FILEHEADER>(&pHead[1], pHead->TexDesc.iPaddingSize);
    auto a = RelOffsetToPtr<Vector3i>(sgdTri2, 0x40);
    const void *data = RelOffsetToPtr<void>(sgdTri2, 0x70);
    auto filename = ((std::filesystem::current_path() / (std::to_string(image_id) + ".bmp")));
    image_id++;

    stbi_write_bmp(filename.string().c_str(), a->x, a->y, 1, data);
}

void HandleFlatMesh(int meshIndex, Vector3 &vertex, Vector3 &normal) {
    const auto coord = GetCurrentCoordinate();
    auto rVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];
    auto vV = (Vector3 *) (rVUVNData->VUVNData_Preset.aui + (meshIndex + s_ppuhVUVN->VUVNDesc.sNumNormal) * 3 + 10);

    vertex = vV[0];
    normal = rVUVNData->VUVNData_Preset.vt2f.avNormal[meshIndex];
    vertex = Vector3Transform(
            vertex, MatrixTranspose(coord[sgdCoordintate->iCoordId0].matCoord));
}

void HandleNVLMesh(int meshIndex, Vector3 &vertex, Vector3 &normal) {
    const auto coord = GetCurrentCoordinate();

    auto pVUVNData = (SGDPROCUNITDATA *) &s_ppuhVUVN[1];

    vertex = pVUVNData->VUVNData_Preset.avt2[meshIndex].vVertex;
    normal = pVUVNData->VUVNData_Preset.avt2[meshIndex].vNormal;

    vertex = Vector3Transform(
            vertex, MatrixTranspose(coord[sgdCoordintate->iCoordId0].matCoord));
}

void HandleWeightedMesh(int meshIndex, Vector3 &vertex, Vector3 &normal) {
    auto pVUVNDataWeighted3 = (_SGDVUVNDATA_WEIGHTED_3 *) &s_ppuhVUVN[3];
    const auto coord = GetCurrentCoordinate();
    const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);

    const auto pWeightedVertex3 = RelOffsetToPtr<_SGDVUVNDATA_WEIGHTEDVERTEX_3>(
            sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvVertex);
    const auto pWeightedNormal3 = RelOffsetToPtr<_SGDVUVNDATA_WEIGHTEDVERTEX_3>(
            sgdCurr, pVectorInfo->aAddress[SVA_WEIGHTED].pvNormal);

    auto wVertex = pWeightedVertex3[pVUVNDataWeighted3[meshIndex]
            .pWeightedVertex];

    auto v0 = Vector3Transform(
            {wVertex.vVertex.x, wVertex.vVertex.y, wVertex.vVertex.z},
            MatrixTranspose(coord[wVertex.ucBoneId0].matCoord));
    auto v1 = Vector3Transform(
            wVertex.aui, MatrixTranspose(coord[wVertex.ucBoneId1].matCoord));
    auto w1 = 255 - wVertex.vVertex.w;

    vertex = (v0 * (wVertex.vVertex.w / 255)) + (v1 * (w1 / 255));

    normal = pWeightedNormal3[pVUVNDataWeighted3[meshIndex].pNormal].aui;
}

void HandleUniqueMesh(int meshIndex, Vector3 &vertex, Vector3 &normal) {
    auto pVUVNDataWeighted3 = (_SGDVUVNDATA_WEIGHTED_3 *) &s_ppuhVUVN[3];
    const auto coord = GetCurrentCoordinate();
    const auto pVectorInfo = GetVectorInfoPtr(sgdCurr);

    const auto pSVAUniqueVertex = RelOffsetToPtr<Vector4>(
            sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvVertex);

    const auto pSVAUniqueNormal = RelOffsetToPtr<Vector4>(
            sgdCurr, pVectorInfo->aAddress[SVA_UNIQUE].pvNormal);

    auto wVertex = pSVAUniqueVertex[pVUVNDataWeighted3[meshIndex]
            .pWeightedVertex];

    vertex = Vector3Transform(
            {wVertex.x, wVertex.y, wVertex.z},
            MatrixTranspose(coord[sgdCoordintate->iCoordId0].matCoord));

    auto n = pSVAUniqueNormal[pVUVNDataWeighted3[meshIndex].pNormal];

    normal = {n.x, n.y, n.z};
}

SGDCOORDINATE *GetCurrentCoordinate() {
    return GetCoordinatePtr(sgdCurr) == nullptr ? GetCoordinatePtr(sgdTop)
                                                : GetCoordinatePtr(sgdCurr);
}

uint *GetNextUnpackAddr(uint *prim) {
    uint *puVar1;

    do {
        puVar1 = prim;
        prim = puVar1 + 1;
    } while ((*puVar1 & 0x60000000) != 0x60000000);
    return puVar1;
}

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
    Matrix4x4 outM;

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

char *ReadFullFile(const char *filename) {
    char *buffer;
    std::ifstream infile(filename, std::ios::binary);

    infile.seekg(0, std::ios::end);
    size_t length = infile.tellg();
    infile.seekg(0, std::ios::beg);

    buffer = new char[length];

    infile.read(buffer, length);

    infile.close();

    return buffer;
}
