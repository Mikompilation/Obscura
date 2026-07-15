#include "model_utils.h"
#include "utility.h"

bool ShouldParseMesh(SGDPROCUNITHEADER *pHead)
{
  if (pHead->VUMeshDesc.ucMeshType == 0)
  {
    return false;
  }
  
  if (pHead->VUMeshDesc.ucMeshType == 0x80)
  {
    // This just adds a triangle below the character, probably for getting floor coordinates of the model
    //pMeshInfo = (SGDVUMESHPOINTNUM *) &pHead[2];
    return false;
  }
  
  return true;
}

bool IsPresetMesh(SGDPROCUNITHEADER *pHead)
{
  return pHead->VUMeshDesc.ucMeshType == iMT_0
         || pHead->VUMeshDesc.ucMeshType == iMT_2
         || pHead->VUMeshDesc.ucMeshType == iMT_2F;
}

SGDVUMESHSTDATA *GetMeshSTData(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData, SGDVUMESHPOINTNUM *pMeshInfo, bool isPresetMesh)
{
  if (isPresetMesh)
  {
    return RelOffsetToPtr<SGDVUMESHSTDATA>(pProcData, (pProcData->VUMeshData_Preset.sOffsetToST - 1) * 4);
  }
  else
  {
    /// For a mesh order is SGDVUMESHPOINTNUM -> SGDVUMESHSTREGSET -> SGDVUMESHSTDATA
    auto sgdVuMeshStRegSet = (SGDVUMESHSTREGSET *) &pMeshInfo[pHead->VUMeshDesc.ucNumMesh];
    return (SGDVUMESHSTDATA *) &sgdVuMeshStRegSet->auiVifCode[3];
  }
}

void SetupMeshSt(SGDPROCUNITHEADER *pHead, SGDVUMESHSTDATA *pMD, aiMesh *pMesh, unsigned int currPointIndex)
{
  if (pHead->VUMeshDesc.MeshType.TEX == true)
  {
    /// Sometimes the value is 0x1, so using the previous value seems to work
    /// If this is removed, it break the entire texture mapping UV
    if (currPointIndex >= 2
        && ((Vector2i *) (pMD->astData))[currPointIndex].y == 0x1)
    {
      pMD->astData[currPointIndex].fT =
          pMD->astData[currPointIndex - 2].fT;
    }
    
    /// Keep the original PS2 ST convention. MikuPan's native mesh renderer
    /// uploads the same values directly, and the glTF path should sample the
    /// extracted textures with matching coordinates.
    pMesh->mTextureCoords[0][currPointIndex] = {
        pMD->astData[currPointIndex].fS,
        pMD->astData[currPointIndex].fT, 0.0f};
  }
}
