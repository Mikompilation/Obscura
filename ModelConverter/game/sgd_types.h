#pragma once
#include "vif.h"
#include <string>

#include <stdint.h>
#include <cstring>

typedef unsigned int uint32;
typedef unsigned char uint8;
typedef unsigned int uint;
typedef unsigned long long uint64;
typedef unsigned long long u8l;

struct Vector2i {
  int x;
  int y;
};

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Vector3i {
    int x;
    int y;
    int z;
};

struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};

struct Matrix4x4 {
    Vector4 row1;
    Vector4 row2;
    Vector4 row3;
    Vector4 row4;
};

typedef Vector4 sceVu0FVECTOR;

enum G3DLIGHTTYPE {
    G3DLIGHT_DIRECTIONAL = 0,
    G3DLIGHT_POINT = 1,
    G3DLIGHT_SPOT = 2,
    NUM_G3DLIGHTTYPE = 3,
    G3DLIGHT_AMBIENT = 3,
    INVALID_G3DLIGHTTYPE = 2147483647,
    G3DLIGHTTYPE_FORCE_DWORD = 2147483647
};

enum SGDRENDERTYPE {
  SRT_REALTIME = 0,
  SRT_PRELIGHTING = 1,
  SRT_MAPSHADOW = 2,
  SRT_CLEARPRELIGHTING = 3,
  NUM_SGDRENDERTYPE = 4
};

typedef enum G3DLIGHTTYPE SGDLIGHTTYPE;

/// 0x1050 For FF1-2-3  PS2\n
/// 0x1060 For FF1      XBOX\n
/// 0x1070 For FF2      XBOX
const int SGD_VALID_VERSIONID = 0x1050;

enum SGDVECTORADDRESSID {
  /// Depends on a weighted vertex
    SVA_UNIQUE = 0,
    SVA_COMMON = 1,
    SVA_WEIGHTED = 2,
    NUM_SGDVECTORADDRESSID = 3,
    SGDVECTORADDRESSID_FORCE_DWORD = 0
};

enum MTYPE {
    iMT_0 = 0x10,
    iMT_2 = 0x12,
    iMT_2F = 0x32
};

enum ProcUnitType : int {
    VUVN = 0,
    MESH = 1,
    MATERIAL = 2,
    COORDINATE = 3,
    BOUNDING_BOX = 4,
    GS_IMAGE = 5,
    TRI2 = 10
};

struct SGDVUMESHDATA {
    qword qwVif1Code;
    sceGifTag GifTag;
};

struct SGDVUMESHDATA_PRESET {
    short int asPad0[2];
    short int sOffsetToST;
    short int sOffsetToPrim;
    int aiPad1[2];
    long int alData[1];
};

struct _SGDVUVNDATA_WEIGHTED_3 {
    //struct _SGDVUVNDATA_WEIGHTEDVERTEX_3* pWeightedVertex;
    //float* pNormal[4];
    int pWeightedVertex;
    int pNormal;
};

struct SGDVUMESHST {
    float fS;
    float fT;
};

struct SGDVUMESHSTDATA {
    struct G3DVIF1CODE_UNPACK VifUnpack;
    struct SGDVUMESHST astData[1];
};

struct SGDVUVNDATA {
    qword qwVif1Code;
    unsigned int uiVTop;
    unsigned int uiPTop;
    unsigned int uiWTop;
    unsigned int uiNumMesh;
};

struct SGDMESHVERTEXDATA_TYPE2 {
    Vector3 vVertex;
    Vector3 vNormal;
};

struct SGDMESHVERTEXDATA_TYPE2F {
    Vector3 avNormal[1];
};

struct SGDVUVNDATA_PRESET {
    unsigned int aui[10];
    union {
        SGDMESHVERTEXDATA_TYPE2 avt2[1];
        SGDMESHVERTEXDATA_TYPE2F vt2f;
    };
};

struct _SGDVUMESHCOLORDATA
{
    G3DVIF1CODE_UNPACK VifUnpack;
    Vector3 avColor[1];
};

struct TRI2SIZEDATA {
  unsigned int uiMaxAddress;
  unsigned int uiMinAddress;
  unsigned int uiVRAMTexSize;
  unsigned int uiMaxTbp;
  unsigned int uiPageSize;
};

struct SGDTRI2FILEHEADER {
  unsigned int uiVif1Code_NOP0;
  unsigned int uiVif1Code_NOP1;
  unsigned int uiVif1Code_FLUSH;
  G3DVIF1CODE_DIRECT uiVif1Code_DIRECT;
  sceGsLoadImage gsli;
};

struct SGDGSIMAGEDATA
{
    unsigned int auiVifCode[4];
    sceGifTag GT;
    unsigned char aucData[1];
};

union SGDPROCUNITDATA {
    SGDVUVNDATA VUVNData;
    SGDVUVNDATA_PRESET VUVNData_Preset;
    SGDVUMESHDATA VUMeshData;
    SGDVUMESHDATA_PRESET VUMeshData_Preset;
    SGDGSIMAGEDATA GSImage;
    unsigned char aucGSImage;
    float avBB[4][8];
};

struct _SGDVUVNDATA_WEIGHTEDVERTEX_3 {
    /*   0 */ Vector4 vVertex;
    ///*  10 */ unsigned int aui[3];
    Vector3 aui;
    /*  1c */ unsigned char ucBoneId0;
    /*  1d */ unsigned char ucBoneId1;
    /*  1e */ unsigned char auc[2];
};

struct _ONELIST {
    short int sCoordId0;
    short int sCoordId1;
    unsigned short usNumVector;
    unsigned short vOff;
};

struct _VERTEXLIST {
    int iNumList;
    struct _ONELIST aList[1];
};

struct SGDCOORDINATE {
    Matrix4x4 matCoord;
    Matrix4x4 matLocalWorld;
    Matrix4x4 _matWork;
    Vector4 vRot;

#if INTPTR_MAX == INT64_MAX
    int pParent;
#elif INTPTR_MAX == INT32_MAX
    SGDCOORDINATE *pParent;
#endif

    /// If -1 then that means it is the origin of bones

    int bCalc;
    int edge_check;
    int bInViewvolume;
};

struct GRA3DMATERIALINDEXCACHE {
    int bEnable;
    int aiIndex[3];
};

typedef struct GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;

struct SGDMATERIAL {
    uint uiPrimType;
    char strTexName[12];
    Vector4 vAmbient;
    Vector4 vDiffuse;
    Vector4 vSpecular;
    Vector4 vEmission;
    int iCacheStatus;
    int iTagAddressOld;
    int iSizeOld;
    int iPad;
    SGDMATERIALCACHE aCache[3];
    int aiPad[8];
};

struct SGDVECTORADDRESS {
    unsigned int uiSize;
#if INTPTR_MAX == INT64_MAX
    int pvVertex;
    int pvNormal;
    int pVertexList;
#elif INTPTR_MAX == INT32_MAX
    sceVu0FVECTOR* pvVertex;
    sceVu0FVECTOR* pvNormal;
    _VERTEXLIST* pVertexList;
#endif
};

struct SGDVECTORINFO {
    uint uiNumAddress;

    /// The ID indicates what type of SGDVECTORADDRESSID it is
    SGDVECTORADDRESS aAddress[NUM_SGDVECTORADDRESSID];
};

enum GSPRIMITIVE : short {
    GS_POINT = 0,
    GS_LINE = 1,
    GS_LINESTRIP = 2,
    GS_TRIANGLE = 3,
    GS_TRIANGLESTRIP = 4,
    GS_TRIANGLEFAN = 5,
    GS_SPRITE = 6
};

struct SGDVUVNDESC {
    short sNumVertex;
    short sNumNormal;
    unsigned short ucSize;

    /// Describes the GS primitive type
    GSPRIMITIVE ucVectorType;
};

struct SGDVUMESHPOINTNUM {
    G3DVIF1CODE_UNPACK VifUnpack;
    unsigned int uiPointNum;
};

struct SGDVUMESHSTREGSET {
  unsigned int auiVifCode[3];
};

struct SGDVUMESHTYPE {
    unsigned char GRD : 1;
    unsigned char TEX : 1;
    unsigned char VTYPE : 2;
    unsigned char PRE : 1;
    unsigned char FLAT : 1;
    unsigned char MULTI : 1;
    unsigned char NVL : 1;
};

struct SGDVUMESHDESC {
    int iTagSize;
    unsigned char ucPad0;
    union {
        SGDVUMESHTYPE MeshType;
        unsigned char ucMeshType;
    };
    unsigned char ucNumMesh;
    unsigned char ucPad1;
};

struct SGDVUMATERIALDESC {
    union {
        int iMaterialIndex;
#if INTPTR_MAX == INT64_MAX
        int pMat;
#elif INTPTR_MAX == INT32_MAX
        SGDMATERIAL* pMat;
#endif
    };
    int iPad;
};

struct SGDCOORDINATEDESC {
    /// boneId
    int iCoordId0;

    /// 0 -> 1 bone\n
    /// 1 -> multi bone attached and iCoordId0 has 1
    int iCoordId1;
};

struct SGDBOUNDINGBOXDESC {
    int iCoordId;
    int iPad;
};

struct SGDGSIMAGEDESC {
    int iQWordSize;
    int iPad;
};

struct SGDLIGHTDESC {
    int Type;
    int iNum;
};

struct SGDTEXTUREIMAGEDESC {
    int iNumTexture;
    int iPaddingSize;
};

struct SGDTEXTUREANIMATIONDESC {
    unsigned char ucNumTexture;
    unsigned char ucPaddingSize;
    bool bEnable;
    unsigned char ucStep;
    unsigned char ucCount;
    bool bLoop;
    unsigned char aucPad[2];
};

struct SGDPROCUNITHEADER {
#if INTPTR_MAX == INT64_MAX
    unsigned int pNext;
#elif INTPTR_MAX == INT32_MAX
    SGDPROCUNITHEADER* pNext;
#endif
    ProcUnitType iCategory;
    union {
        u8l u8lPrimType;
        SGDVUVNDESC VUVNDesc;
        SGDVUMESHDESC VUMeshDesc;
        SGDVUMATERIALDESC VUMaterialDesc;
        SGDCOORDINATEDESC CoordDesc;
        SGDBOUNDINGBOXDESC BoundingBoxDesc;
        SGDGSIMAGEDESC GSImageDesc;
        SGDLIGHTDESC LightDesc;
        SGDTEXTUREIMAGEDESC TexDesc;
        SGDTEXTUREANIMATIONDESC TexAnimDesc;
    };
};

struct SGDFILEHEADER {
    uint uiVersionId;
    unsigned char ucMapFlag;
    unsigned char ucModelType;
    unsigned short usNumMaterial;

    /// Bones of the model
#if INTPTR_MAX == INT64_MAX
    int pCoord;

    /// Material
    int pMaterial;

    /// Vertices of the model
    int pVectorInfo;
#elif INTPTR_MAX == INT32_MAX
    SGDCOORDINATE *pCoord;

    /// Material
    SGDMATERIAL *pMaterial;

    /// Vertices of the model
    SGDVECTORINFO *pVectorInfo;
#endif

    /// Number of bones
    uint uiNumBlock;

#if INTPTR_MAX == INT64_MAX
    /// There are as many iterations as uiNumBlock
    /// Offsets of meshes
    int apProcUnitHead[];
#elif INTPTR_MAX == INT32_MAX
    /// There are as many iterations as uiNumBlock
    /// Offsets of meshes
    SGDPROCUNITHEADER *apProcUnitHead[];
#endif
};

enum MAPMODELPK2DATAINDEX {
  MAPMODELPK2_MODEL = 0,
  MAPMODELPK2_SOURCEMODEL = 1,
  MAPMODELPK2_SHADOWMODEL = 2
};

inline SGDCOORDINATE* GetCoordinatePtr(const SGDFILEHEADER* pSGD)
{
#if INTPTR_MAX == INT64_MAX
    if ((pSGD->pCoord < 0x30000000) && (pSGD->pCoord != 0x0))
    {
        return (SGDCOORDINATE*)((int64_t)pSGD + (int)pSGD->pCoord);
    }

    return nullptr;
#elif INTPTR_MAX == INT32_MAX
    if ((pSGD->pCoord < 0x30000000) && (pSGD->pCoord != 0x0))
    {
        return (SGDCOORDINATE*)((int)pSGD + (int)pSGD->pCoord);
    }

    return nullptr;
#endif
}

inline SGDVECTORINFO* GetVectorInfoPtr(const SGDFILEHEADER* pSGD)
{
#if INTPTR_MAX == INT64_MAX
    if (pSGD->pVectorInfo != 0x0)
    {

        return (SGDVECTORINFO*)((int64_t)pSGD + (int)pSGD->pVectorInfo);
    }

    return nullptr;
#elif INTPTR_MAX == INT32_MAX
    if (pSGD->pVectorInfo != nullptr)
    {
        pSGDHead->pVectorInfo = (SGDVECTORINFO*)((int)pSGDHead + (int)pSGDHead->pVectorInfo);
    }

    return nullptr;
#endif
}

inline SGDPROCUNITHEADER* GetTopProcUnitHeaderPtr(const SGDFILEHEADER* pSGD, int index)
{
#if INTPTR_MAX == INT64_MAX

    if (pSGD->apProcUnitHead[index] != 0x0)
    {
        return (SGDPROCUNITHEADER*)((int64_t)pSGD + (unsigned int)pSGD->apProcUnitHead[index]);
    }

    return nullptr;
#elif INTPTR_MAX == INT32_MAX
    if (pSGD->pVectorInfo != nullptr)
    {
        pSGDHead->apProcUnitHead[i] = (SGDPROCUNITHEADER*)((int)pSGDHead + (int)pSGDHead->apProcUnitHead[i]);
    }

    return nullptr;
#endif
}

inline SGDPROCUNITHEADER* GetNextProcUnitHeaderPtr(const SGDPROCUNITHEADER* pHead)
{
#if INTPTR_MAX == INT64_MAX
    if (pHead->pNext < 0x30000000 && pHead->pNext != 0x0)
    {
        return (SGDPROCUNITHEADER*)((int64_t)pHead + pHead->pNext);
    }

    return nullptr;
#elif INTPTR_MAX == INT32_MAX
    return (SGDPROCUNITHEADER*)((int)&pPUHead->pNext + (int)pPUHead->pNext);
#endif
}

inline SGDMATERIAL* GetMaterialPtr(const SGDFILEHEADER* pSGD, int index)
{
#if INTPTR_MAX == INT64_MAX
    if (index > pSGD->usNumMaterial)
    {
        return nullptr;
    }

    auto pMaterial = (SGDMATERIAL*)((int64_t)pSGD + (int)pSGD->pMaterial);
    return &pMaterial[index];
#elif INTPTR_MAX == INT32_MAX
    return (SGDMATERIAL*)((int)pSGDHead + (int)pSGDHead->pMaterial);
#endif
}

inline std::string GetMaterialStrName(SGDMATERIAL* pMaterial)
{
    if (pMaterial == nullptr)
    {
        return std::string("");
    }

    char materialName[13];
#if defined(_WIN32) || defined(_WIN64)
    strncpy_s(materialName, pMaterial->strTexName, 12);
#else
    strncpy(materialName, pMaterial->strTexName, 12);
#endif
    materialName[12] = '\0';

    return std::string(materialName);
}