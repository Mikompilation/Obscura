#include "Exporter.h"
#include "assimp/scene.h"
#include "assimp/Exporter.hpp"
#include "utils/logging.h"

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
        scene->mMeshes[m]->mNumUVComponents[0] = mesh.uv.size();
        scene->mMeshes[m]->mTextureCoords[0] = new aiVector3D[mesh.uv.size()];

        for (auto i = 0; i < mesh.uv.size(); i++)
        {
            scene->mMeshes[m]->mTextureCoords[0][i] = {mesh.uv[i].x, mesh.uv[i].y, 0.0f};
        }

        // Setting up the textures
        scene->mTextures[m] = new aiTexture();
        scene->mTextures[m]->mHeight = mesh.textures[0]->GetHeight();
        scene->mTextures[m]->mWidth = mesh.textures[0]->GetWidth();
        scene->mTextures[m]->pcData = static_cast<aiTexel *>(mesh.textures[0]->GetRawData());

        // Setting up the materials
        scene->mMeshes[m]->mMaterialIndex = m;
        scene->mMaterials[m] = new aiMaterial();
        scene->mMaterials[m]->AddProperty(&mesh.ambient[0], 1, AI_MATKEY_COLOR_AMBIENT);
        scene->mMaterials[m]->AddProperty(&mesh.diffuse[0], 1, AI_MATKEY_COLOR_DIFFUSE);
        scene->mMaterials[m]->AddProperty(&mesh.specular[0], 1, AI_MATKEY_COLOR_SPECULAR);

        m++;
    }

    Assimp::Exporter exporter;
    auto result = exporter.Export(scene, "obj", path.string());

    programLogger->info("Status of the export: {}", result == aiReturn_SUCCESS ? "Success" : "Failure");
}
