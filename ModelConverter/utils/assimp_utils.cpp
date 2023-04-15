#include "assimp_utils.h"
#include "assimp/texture.h"
#include "utility.h"

aiMesh *CreateNewMesh(int numPoints, int matIndex) {
    auto m = new struct aiMesh();
    m->mMaterialIndex = matIndex;

    m->mNumVertices = numPoints;
    m->mVertices = new aiVector3D[numPoints];
    m->mNormals = new aiVector3D[numPoints];
    m->mTextureCoords[0] = new aiVector3D[numPoints];
    m->mNumUVComponents[0] = 2;
    m->mNumFaces = numPoints - 2;
    m->mFaces = new aiFace[numPoints - 2];

    return m;
}

aiMaterial *FindMaterial(std::vector<aiMaterial *> materials, const std::string& name, int *matIndex) {
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

aiMaterial *CreateNewMaterial(const std::string &name, Texture *t, SGDMATERIAL *pMaterial) {
    auto s = aiString(name);
    auto currentMaterial = new aiMaterial();

    currentMaterial->AddProperty(&s,  AI_MATKEY_NAME);
    currentMaterial->AddProperty(&pMaterial->vDiffuse, 1, AI_MATKEY_COLOR_DIFFUSE);
    currentMaterial->AddProperty(&pMaterial->vAmbient, 1, AI_MATKEY_COLOR_AMBIENT);
    currentMaterial->AddProperty(&pMaterial->vEmission, 1, AI_MATKEY_COLOR_EMISSIVE);
    currentMaterial->AddProperty(&pMaterial->vSpecular, 1, AI_MATKEY_COLOR_SPECULAR);

    if (t == nullptr)
    {
        return currentMaterial;
    }

    auto texName = name + ".png";
    SaveImage(texName, t->GetWidth(), t->GetHeight(), 4, t->GetRawData());
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
