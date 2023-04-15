#include "logging.h"
#include <string>

void PrintBlockInfo(SGDPROCUNITHEADER *pHead, SGDFILEHEADER *pSGDTop) {
    switch (pHead->iCategory) {
        case VUVN:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|          {:02d}         |", VUVN);
            programLogger->info("|   VUVN Type: {:#x}    |", pHead->VUVNDesc.ucVectorType);
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case MESH:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", MESH);
            programLogger->info("|   MESH Type: {:#x}   |", pHead->VUMeshDesc.ucMeshType);
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case MATERIAL:
            programLogger->info("----- New Sub Model Part -----");
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", MATERIAL);
            programLogger->info("|     {}     |", GetMaterialPtr(pSGDTop, pHead->VUMaterialDesc.pMat)->strTexName);
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case COORDINATE:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", COORDINATE);
            programLogger->info("|     Coordinates     |");
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case BOUNDING_BOX:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", BOUNDING_BOX);
            programLogger->info("|     BoundingBox     |");
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case GS_IMAGE:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", GS_IMAGE);
            programLogger->info("|     GS Image Data   |");
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        case TRI2:
            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", TRI2);
            programLogger->info("|     TRI2 Data       |");
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
            break;
        default:
            PrintEmptyBlock();
            break;
    }
}

void PrintEmptyBlock() {
    programLogger->info("|---------------------|");
    programLogger->info("|                     |");
    programLogger->info("|                     |");
    programLogger->info("|        EMPTY        |");
    programLogger->info("|                     |");
    programLogger->info("|                     |");
    programLogger->info("|---------------------|");
}

void PrintBlockBeginning(int i) {
    programLogger->info("----- Begin Block {} -----", i);
}

void PrintBlockEnding(int i) {
    programLogger->info("-----  End Block {}  -----", i);
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


