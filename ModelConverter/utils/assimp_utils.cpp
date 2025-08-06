#include "assimp_utils.h"
#include "assimp/texture.h"
#include "utility.h"
#include "assimp/Exporter.hpp"
#include "assimp/postprocess.h"
#include "logging.h"
#include "assimp/cimport.h"

int GetNumberOfParents(aiNode* n)
{
    int numParents = 0;

    while(n->mParent != nullptr)
    {
        numParents++;
        n = n->mParent;
    }

    return numParents;
}

aiMesh *CreateNewMesh(unsigned int numPoints, int matIndex) {
    auto m = new struct aiMesh();
    m->mMaterialIndex = matIndex;
    m->mPrimitiveTypes = aiPrimitiveType_TRIANGLE;

    m->mNumVertices = numPoints;
    m->mVertices = new aiVector3D[m->mNumVertices];
    m->mNormals = new aiVector3D[m->mNumVertices];
    m->mTextureCoords[0] = new aiVector3D[m->mNumVertices];
    m->mNumUVComponents[0] = 2;
    m->mNumFaces = numPoints - 2;
    m->mFaces = new aiFace[m->mNumFaces];

    //m->mAABB = aiAABB();
    //m->mAABB.mMin = aiVector3D(boundingBoxMin.x, boundingBoxMin.y, boundingBoxMin.z);
    //m->mAABB.mMax = aiVector3D(boundingBoxMax.x, boundingBoxMax.y, boundingBoxMax.z);

    return m;
}

aiMaterial *FindMaterial(const std::vector<aiMaterial *>& materials, const std::string& name, int *matIndex) {
    aiMaterial *currentMaterial = nullptr;

    for(auto i = 0; i < materials.size(); i++)
    {
        if (std::string(materials[i]->GetName().C_Str()).substr(0, name.length()) == name)
        {
            currentMaterial = materials[i];
            *matIndex = i;
            break;
        }
    }

    return currentMaterial;
}

aiMaterial *CreateNewMaterial(std::filesystem::path exportFolder, const std::string &name, Texture *t, SGDMATERIAL *pMaterial) {
    auto s = aiString(name);
    auto currentMaterial = new aiMaterial();

    currentMaterial->AddProperty(&s,  AI_MATKEY_NAME);

    // Scale the float value for W
    pMaterial->vDiffuse.w =  255.0f * pMaterial->vDiffuse.w  / 128.0f;
    pMaterial->vAmbient.w =  255.0f * pMaterial->vAmbient.w  / 128.0f;
    pMaterial->vEmission.w = 255.0f * pMaterial->vEmission.w / 128.0f;
    pMaterial->vSpecular.w = 255.0f * pMaterial->vSpecular.w / 128.0f;

    currentMaterial->AddProperty(&pMaterial->vDiffuse, 1, AI_MATKEY_COLOR_DIFFUSE);
    currentMaterial->AddProperty(&pMaterial->vAmbient, 1, AI_MATKEY_COLOR_AMBIENT);
    currentMaterial->AddProperty(&pMaterial->vEmission, 1, AI_MATKEY_COLOR_EMISSIVE);
    currentMaterial->AddProperty(&pMaterial->vSpecular, 1, AI_MATKEY_COLOR_SPECULAR);

    if (t == nullptr)
    {
        return currentMaterial;
    }

    // TODO: Filter the value name to remove extensions
    std::filesystem::path p(name);

    auto texName = p.stem().string() + ".png";
    SaveImage(exportFolder, texName, t->GetWidth(), t->GetHeight(), 4, t->GetRawData());
    auto b = aiString(texName);
    currentMaterial->AddProperty(&b, AI_MATKEY_TEXTURE(aiTextureType_DIFFUSE, 0));

    auto aiTex = new aiTexture();
    aiTex->mFilename = texName;

    aiTex->mHeight = t->GetHeight();
    aiTex->mWidth = t->GetWidth();

    // rgba8888
    aiTex->achFormatHint[0] = 'r';
    aiTex->achFormatHint[1] = 'g';
    aiTex->achFormatHint[2] = 'b';
    aiTex->achFormatHint[3] = 'a';
    aiTex->achFormatHint[4] = '8';
    aiTex->achFormatHint[5] = '8';
    aiTex->achFormatHint[6] = '8';
    aiTex->achFormatHint[7] = '8';
    aiTex->achFormatHint[8] = '\0';

    aiTex->pcData = new aiTexel[t->GetHeight() * t->GetWidth()];

    for (auto i = 0; i < t->GetHeight(); i++)
    {
        for (auto j = 0; j < t->GetWidth(); j++)
        {
            unsigned int pixel = t->GetPixel(i, j);
            auto p = (aiTexel*) &pixel;
            aiTex->pcData[i * t->GetWidth() + j] = {p->r, p->g, p->b, p->a};
        }
    }

    return currentMaterial;
}

void ExportScene(std::filesystem::path exportFolder, const std::string& format, aiScene *scene, int exporterOptions) {
    Assimp::Exporter exporter;
    std::string extension = format;

    if (format == "collada")
    {
        extension = "dae";
    }
    else if (format == "gltf2")
    {
        extension = "gltf";
    }
    else if (format == "obj")
    {
        extension = "obj";
    }

    auto result = exporter.Export(scene, format, (exportFolder.replace_extension(extension)).string(), exporterOptions);

    if (result != aiReturn_SUCCESS)
    {
        programLogger->error("Failed to export the scene: {}", exporter.GetErrorString());
    }
    else
    {
        programLogger->info("Successfully exported the scene to format {}", format);
    }
}

void CreateBone(aiMesh *mesh, Matrix4x4 *mat, const aiString& name) {
    mesh->mNumBones = 1;
    mesh->mBones = new aiBone*[mesh->mNumBones];

    for (auto k = 0; k < mesh->mNumBones; k++)
    {
        mesh->mBones[k] = new aiBone();
        mesh->mBones[k]->mName = aiString(name);

        auto aiMat = aiMatrix4x4(*(aiMatrix4x4*)mat).Inverse().Transpose();
        mesh->mBones[k]->mOffsetMatrix = aiMat;
        mesh->mBones[k]->mNumWeights = mesh->mNumVertices;
        mesh->mBones[k]->mWeights = new aiVertexWeight[mesh->mNumVertices];

        for (auto j = 0; j < mesh->mNumVertices; j++)
        {
            mesh->mBones[k]->mWeights[j].mVertexId = j;
            mesh->mBones[k]->mWeights[j].mWeight = 1.0f;
        }
    }
}

void SetupMeshFace(aiMesh* currentMesh, int currPointIndex)
{
    currentMesh->mFaces[currPointIndex].mNumIndices = 3;
    currentMesh->mFaces[currPointIndex].mIndices = new unsigned int[3];

    if (currPointIndex % 2 == 0) {
        currentMesh->mFaces[currPointIndex].mIndices[0] = currPointIndex;
        currentMesh->mFaces[currPointIndex].mIndices[1] = currPointIndex + 1;
        currentMesh->mFaces[currPointIndex].mIndices[2] = currPointIndex + 2;
    }
    else {
        currentMesh->mFaces[currPointIndex].mIndices[0] = currPointIndex + 1;
        currentMesh->mFaces[currPointIndex].mIndices[1] = currPointIndex;
        currentMesh->mFaces[currPointIndex].mIndices[2] = currPointIndex + 2;
    }
}

void BuildNodeTree(std::vector<aiNode*> aiNodes)
{
  //for (size_t i = 0; i < aiNodes.size(); i++)
  //{
  //  aiNodes[i]->mNumMeshes = aiMeshesIndex[i].size();
  //  aiNodes[i]->mMeshes = aiMeshesIndex[i].empty() ? nullptr: aiMeshesIndex[i].data();
  //  
  //  // Link children
  //  std::vector<aiNode *> children;
  //  for (auto j = 0; j < aiNodes.size(); j++)
  //  {
  //    if (aiNodes[j]->mParent == aiNodes[i] && j != i)
  //    {
  //      children.push_back(aiNodes[j]);
  //    }
  //  }
  //  aiNodes[i]->mNumChildren = children.size();
  //  aiNodes[i]->mChildren = children.empty() ? nullptr : new aiNode *[children.size()];
  //  for (size_t j = 0; j < children.size(); j++)
  //  {
  //    aiNodes[i]->mChildren[j] = children[j];
  //  }
  //}
}
