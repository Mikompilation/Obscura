#include "logging.h"
#include <string>

void PrintBlockInfo(SGDPROCUNITHEADER *pHead, SGDFILEHEADER *pSGDTop) {
    switch (pHead->iCategory) {
        case VUVN:
            programLogger->info("[{:02d}] VUVN Type: {:#x}", VUVN, pHead->VUVNDesc.ucVectorType);
            break;
        case MESH:
            programLogger->info("[{:02d}] MESH Type: {:#x}", MESH, pHead->VUMeshDesc.ucMeshType);
            break;
        case MATERIAL:
            programLogger->info("----- New Sub Model Part -----");
            programLogger->info("[{:02d}] MATE Name: {}", MATERIAL, GetMaterialPtr(pSGDTop, pHead->VUMaterialDesc.pMat)->strTexName);
            break;
        case COORDINATE:
            programLogger->info("[{:02d}] COORD", COORDINATE);
            break;
        case BOUNDING_BOX:
            programLogger->info("[{:02d}] BoundingBox: {}", BOUNDING_BOX);
            break;
        case GS_IMAGE:
            programLogger->info("[{:02d}] GsTex: {}", GS_IMAGE);
            break;
        case TRI2:
            programLogger->info("[{:02d}] Tri2Data: {}", TRI2);
            break;
        default:
            PrintEmptyBlock();
            break;
    }
}

void PrintEmptyBlock() {
    programLogger->info("-----     EMPTY     -----");
}

void PrintBlockBeginning(int i) {
    programLogger->info("----- Begin Block {} -----", i);
}

void PrintBlockEnding(int i) {
    programLogger->info("-----  End Block {}  -----\n", i);
}

void PrintSGDBeginning(int i) {
    programLogger->info("-----  Begin SGD {}  -----", i);
}

void PrintSGDEnding(int i) {
    programLogger->info("-----  End SGD {}  -----\n", i);
}

void InitLogging() {
    spdlog::set_pattern("[%H:%M:%S] [%n] [%^%l%$] [thread %t] %v");

    std::vector<spdlog::sink_ptr> sinks;
    sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());

#ifndef _DEBUG
    // No need of backing up logs in dev mode since IDE will show them
    sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("log.txt", true));
#endif

    programLogger = std::make_shared<spdlog::logger>(
            PROGRAM_LOGGER, begin(sinks), end(sinks));
    programLogger->info("Setting up loggers");

    spdlog::register_logger(programLogger);
}


