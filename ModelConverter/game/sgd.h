//
// Created by wagrenier on 11/30/2021.
//

#ifndef FATALSTACK_SGD_H
#define FATALSTACK_SGD_H

#include "sgd_types.h"

void sgdRemap(SGDFILEHEADER* pSGDHead);

bool isValidSGDFile(SGDFILEHEADER* pSGDHead);

void initializeVectorInfo(SGDFILEHEADER* pSGDHead);

void initializeParentVectorInfo(SGDFILEHEADER* pSGDHead);

void initializeSGDProcUnitHeader(SGDFILEHEADER* pSGDHead);

void MappingVertexList(_VERTEXLIST* param_1, SGDVECTORINFO* param_2);

#endif //FATALSTACK_SGD_H
