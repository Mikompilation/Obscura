//
// Created by wagrenier on 11/30/2021.
//

#include "sgd.h"
#include <stdio.h>

bool isValidSGDFile(SGDFILEHEADER* pSGDHead)
{
	return
		pSGDHead != nullptr &&
		pSGDHead->uiVersionId == SGD_VALID_VERSIONID &&
		!pSGDHead->ucMapFlag;
}

void initializeSGDCoordinate(SGDFILEHEADER* pSGDHead)
{
	if (pSGDHead->uiNumBlock == 1)
	{
		return;
	}

	/* The loop goes through each SGDCOORDINATE to set the current element as the
	           parent of the next element */
	for (int i = 0; i < pSGDHead->uiNumBlock - 1; i++)
	{
		int j = GetCoordinatePtr(pSGDHead)[i].pParent;

		/* Since it is the first element, it does not have a parent */
		if (j < 0)
		{
            GetCoordinatePtr(pSGDHead)[i].pParent = 0x0;
		}
		else if (GetCoordinatePtr(pSGDHead)[i].pParent < pSGDHead->pCoord)
		{
			/* If the current element is after the Parent, set the address of the parent to
			   the current element after the array of size 0x38 */
            // TODO : Check back here
			//pSGDHead->pCoord[i].pParent = &pSGDHead->pCoord[j];
		}
	}
}

void initializeVectorInfo(SGDFILEHEADER* pSGDHead)
{
	if (GetVectorInfoPtr(pSGDHead)->uiNumAddress == 0)
	{
		return;
	}

	SGDVECTORINFO* pCurrentVectorInfo = GetVectorInfoPtr(pSGDHead);
	auto index = 0;

	do
	{
		auto size = pCurrentVectorInfo->aAddress[0].uiSize;


		if ((size != 0) && pCurrentVectorInfo->aAddress[0].pvVertex != 0x0)
		{
			//pCurrentVectorInfo->aAddress[0].pvVertex = (sceVu0FVECTOR*)((int)pSGDHead + (int)pCurrentVectorInfo->
			//	aAddress[0].pvVertex);
		}

		if ((1 < size) && pCurrentVectorInfo->aAddress[0].pvNormal != 0x0)
		{
			//pCurrentVectorInfo->aAddress[0].pvNormal = (sceVu0FVECTOR*)((int)pSGDHead + (int)pCurrentVectorInfo->
			//	aAddress[0].pvNormal);
		}

		if ((2 < size) && pCurrentVectorInfo->aAddress[0].pVertexList != 0x0)
		{
			//pCurrentVectorInfo->aAddress[0].pVertexList = (_VERTEXLIST*)((int)pSGDHead + (int)pCurrentVectorInfo->
			//	aAddress[0].pVertexList);
		}

		index += 1;
		pCurrentVectorInfo = (SGDVECTORINFO*)&pCurrentVectorInfo->aAddress[0].pVertexList;
	}
	while (index < GetVectorInfoPtr(pSGDHead)->uiNumAddress);
}

void initializeParentVectorInfo(SGDFILEHEADER* pSGDHead)
{
    /*
	if (pSGDHead->pVectorInfo == (SGDVECTORINFO*)0x0 || pSGDHead->pVectorInfo->uiNumAddress != 4)
	{
		return;
	}

	if (pSGDHead->pVectorInfo->aAddress[2].pvNormal == (sceVu0FVECTOR*)0x0 && pSGDHead->pVectorInfo->aAddress[2].
		pvVertex == (sceVu0FVECTOR*)0x0)
	{
		pSGDHead->pVectorInfo->aAddress[2].pVertexList = nullptr;
	}

	pSGDHead->pVectorInfo->aAddress[0].pVertexList = nullptr;

	if (pSGDHead->pVectorInfo->aAddress[2].pVertexList == nullptr)
	{
		return;
	}

	MappingVertexList(pSGDHead->pVectorInfo->aAddress[2].pVertexList, pSGDHead->pVectorInfo);

	MappingVertexList(
		(_VERTEXLIST*)(pSGDHead->pVectorInfo->aAddress[2].pVertexList->aList + pSGDHead->pVectorInfo->aAddress[2].
		                                                                       pVertexList->iNumList),
		pSGDHead->pVectorInfo);
     */
}

void initializeSGDProcUnitHeader(SGDFILEHEADER* pSGDHead)
{
	if (pSGDHead->uiNumBlock == 0)
	{
		return;
	}

	/* Sets full-chain of SGDPROCUNITHEADER where initialy pNext has the offset */
	for (int i = 0; i < pSGDHead->uiNumBlock; i++)
	{
		if (pSGDHead->apProcUnitHead[i] == 0x0)
		{
			continue;
		}

		//pSGDHead->apProcUnitHead[i] = (SGDPROCUNITHEADER*)((int)pSGDHead + (int)pSGDHead->apProcUnitHead[i]);
	}
}

void initializeSGDType(SGDFILEHEADER* pSGDHead)
{
	if (pSGDHead->uiNumBlock == 0)
	{
		return;
	}

    /*
	for (uint i = 0; i < pSGDHead->uiNumBlock; i++)
	{
		SGDPROCUNITHEADER* pPUHead = pSGDHead->apProcUnitHead[i];
		SGDPROCUNITHEADER* previousPH = (SGDPROCUNITHEADER*)nullptr;

		do
		{
			if (pPUHead == (SGDPROCUNITHEADER*)0x0 || pPUHead->pNext == (SGDPROCUNITHEADER*)0x0)
			{
				break;
			}

			switch (pPUHead->iCategory)
			{
			case 0:
				previousPH = pPUHead;
				break;
			case 1:
				//MappingMeshData(pPUHead, previousPH, pSGDHead);
				break;
			case 2:
				pPUHead->VUMaterialDesc.pMat = &pSGDHead->pMaterial[pPUHead->VUMaterialDesc.iMaterialIndex];
				break;
			case 10:
				printf("TRI2Files");
			//RebuildTRI2Files(pPUHead);
				break;
			default:
				break;
			}

			pPUHead->pNext = (SGDPROCUNITHEADER*)((int)&pPUHead->pNext + (int)pPUHead->pNext);
			pPUHead = pPUHead->pNext;
		}
		while (pPUHead->pNext != (SGDPROCUNITHEADER*)0x0);
	}
     */
}

void sgdRemap(SGDFILEHEADER* pSGDHead)
{
	if (!isValidSGDFile(pSGDHead))
	{
		return;
	}

	pSGDHead->ucMapFlag = true;

	// Check if value has been initialized, if not then add the current value to the offset of beginning of SGD FILE
	if ((pSGDHead->pCoord < 0x30000000) && (pSGDHead->pCoord != 0x0))
	{
		// pSGDHead->pCoord = (SGDCOORDINATE*)((int)pSGDHead + (int)pSGDHead->pCoord);
	}

	if (pSGDHead->pMaterial < 0x30000000)
	{
		//pSGDHead->pMaterial = (SGDMATERIAL*)((int)pSGDHead + (int)pSGDHead->pMaterial);
	}

	if (pSGDHead->pCoord != 0x0)
	{
		initializeSGDCoordinate(pSGDHead);
	}

	// Calculate the address of pVectorInfo by adding the starting address of
	// pSGDHead to the value currently located at pSGDHead->pVectorInfo
	if (pSGDHead->pVectorInfo != 0x0)
	{
		initializeVectorInfo(pSGDHead);
		initializeParentVectorInfo(pSGDHead);
	}

	initializeSGDProcUnitHeader(pSGDHead);
	initializeSGDType(pSGDHead);

	/*Next function to reverse*/
	// void SgSortUnitPrim(SGDPROCUNITHEADER *param_1)
}

void MappingVertexList(_VERTEXLIST* vertexList, SGDVECTORINFO* vectorInfo)
{
}
