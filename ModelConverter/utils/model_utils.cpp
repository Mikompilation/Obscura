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

SGDVUMESHSTDATA *GetMeshSTData(SGDPROCUNITHEADER *pHead, SGDPROCUNITDATA *pProcData, SGDVUMESHPOINTNUM *pMeshInfo, bool isIMT_2)
{
  if (isIMT_2)
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
    if (((Vector2i *) (pMD->astData))[currPointIndex].y == 0x1)
    {
      pMD->astData[currPointIndex].fT =
          pMD->astData[currPointIndex - 2].fT;
    }
    
    /// Need to subtract to compensate for the png loader flipping the Y-axis
    pMesh->mTextureCoords[0][currPointIndex] = {
        pMD->astData[currPointIndex].fS,
        1.0f - pMD->astData[currPointIndex].fT, 0.0f};
  }
}
