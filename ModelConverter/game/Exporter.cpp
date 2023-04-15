#include "Exporter.h"
#include "assimp/scene.h"
#include "assimp/Exporter.hpp"
#include "utils/logging.h"
#include "assimp/postprocess.h"
#include "utils/utility.h"

void ExportMesh(const std::vector<Mesh>& meshes, const std::filesystem::path& path) {
    programLogger->info("Exporting mesh to {}", path.string());

    //Setup scene and root node
    auto scene = new aiScene();
    scene->mRootNode = new aiNode();
    scene->mRootNode->mMeshes = new unsigned int[meshes.size()];
    scene->mRootNode->mNumMeshes = meshes.size();

    // Setup arrays
    scene->mNumMeshes = meshes.size();
    scene->mMeshes = new aiMesh*[meshes.size()];

    scene->mNumMaterials = meshes.size();
    scene->mMaterials = new aiMaterial*[meshes.size()];

    scene->mNumTextures = meshes.size();
    scene->mTextures = new aiTexture*[meshes.size()];

    auto m = 0;

    for(auto mesh : meshes)
    {
        programLogger->info("Converting mesh: {}", mesh.mesh_name[0]);

        // Setup meshes
        scene->mRootNode->mMeshes[m] = m;
        scene->mMeshes[m] = new aiMesh();
        scene->mMeshes[m]->mName = mesh.mesh_name[0];
        scene->mMeshes[m]->mPrimitiveTypes = aiPrimitiveType_TRIANGLE;

        scene->mMeshes[m]->mNumVertices = mesh.vertices.size();
        scene->mMeshes[m]->mVertices = new aiVector3D[mesh.vertices.size()];

        for (auto i = 0; i < mesh.vertices.size(); i++)
        {
            scene->mMeshes[m]->mVertices[i] = aiVector3D(mesh.vertices[i].x, mesh.vertices[i].y, mesh.vertices[i].z);
        }

        scene->mMeshes[m]->mNormals = new aiVector3D[mesh.vertex_normals.size()];

        for (auto i = 0; i < mesh.vertex_normals.size(); i++)
        {
            scene->mMeshes[m]->mNormals[i] = aiVector3D(mesh.vertex_normals[i].x, mesh.vertex_normals[i].y, mesh.vertex_normals[i].z);
        }

        // Setting up the faces
        scene->mMeshes[m]->mNumFaces = mesh.triangles.size();
        scene->mMeshes[m]->mFaces = new aiFace[mesh.triangles.size()];

        scene->mMeshes[m]->mBones = new aiBone*[mesh.vertices.size()];

        for (auto i = 0; i < mesh.triangles.size(); i++)
        {
            aiFace face;
            face.mIndices = new unsigned int[3];
            face.mNumIndices = 3;

            face.mIndices[0] = mesh.triangles[i].x;
            face.mIndices[1] = mesh.triangles[i].y;
            face.mIndices[2] = mesh.triangles[i].z;

            scene->mMeshes[m]->mFaces[i] = face;
        }

        // Setting up the UVs
        scene->mMeshes[m]->mNumUVComponents[0] = 2;
        scene->mMeshes[m]->mTextureCoords[0] = new aiVector3D[mesh.uv.size()];

        for (auto i = 0; i < mesh.uv.size(); i++)
        {
            scene->mMeshes[m]->mTextureCoords[0][i] = {mesh.uv[i].x, mesh.uv[i].y, 0.0f};
        }

        // Setting up the textures
        auto textureName = std::to_string(m) + ".png";

        scene->mTextures[m] = new aiTexture();
        scene->mTextures[m]->mFilename = textureName;

        if (!mesh.textures.empty())
        {
            SaveImage(m, mesh.textures[0]->GetWidth(), mesh.textures[0]->GetHeight(), 4, mesh.textures[0]->GetRawData());
            scene->mTextures[m]->mHeight = mesh.textures[0]->GetHeight();
            scene->mTextures[m]->mWidth = mesh.textures[0]->GetWidth();

            // rgba8888
            scene->mTextures[m]->achFormatHint[0] = 'r';
            scene->mTextures[m]->achFormatHint[1] = 'g';
            scene->mTextures[m]->achFormatHint[2] = 'b';
            scene->mTextures[m]->achFormatHint[3] = 'a';
            scene->mTextures[m]->achFormatHint[4] = '8';
            scene->mTextures[m]->achFormatHint[5] = '8';
            scene->mTextures[m]->achFormatHint[6] = '8';
            scene->mTextures[m]->achFormatHint[7] = '8';
            scene->mTextures[m]->achFormatHint[8] = '\0';

            scene->mTextures[m]->pcData = new aiTexel[mesh.textures[0]->GetHeight() * mesh.textures[0]->GetWidth()];

            for (auto i = 0; i < mesh.textures[0]->GetHeight(); i++)
            {
                for (auto j = 0; j < mesh.textures[0]->GetWidth(); j++)
                {
                    unsigned int pixel = mesh.textures[0]->GetPixel(i, j);
                    auto p = (aiTexel*) &pixel;
                    scene->mTextures[m]->pcData[i * mesh.textures[0]->GetWidth() + j] = {p->r, p->g, p->b, p->a};
                }
            }
        }

        // Setting up the materials
        scene->mMeshes[m]->mMaterialIndex = m;
        scene->mMaterials[m] = new aiMaterial();

        auto s = aiString(textureName);
        scene->mMaterials[m]->AddProperty(&s, AI_MATKEY_TEXTURE(aiTextureType_DIFFUSE, 0));
        scene->mMaterials[m]->AddProperty(&mesh.ambient[0], 1, AI_MATKEY_COLOR_AMBIENT);
        scene->mMaterials[m]->AddProperty(&mesh.diffuse[0], 1, AI_MATKEY_COLOR_DIFFUSE);
        scene->mMaterials[m]->AddProperty(&mesh.specular[0], 1, AI_MATKEY_COLOR_SPECULAR);

        m++;
    }

    Assimp::Exporter exporter;
    auto result = exporter.Export(scene, "obj", path.string(), aiProcess_EmbedTextures | aiProcess_ValidateDataStructure);

    if (result != aiReturn_SUCCESS)
    {
        programLogger->error("Failed to export the scene: {}", exporter.GetErrorString());
    }
    else
    {
        programLogger->info("Successfully exported the scene");
    }
}
