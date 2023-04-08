#include "logging.h"

#include <cstdio>
#include <string>

void PrintVectorInfo(Vector3 v3) {
    auto sum = v3.x * v3.x + v3.y * v3.y + v3.z * v3.z;
    printf("\nVector Info : XYZ [ %0.6f, %0.6f, %0.6f ], Pow %0.6f", v3.x, v3.y, v3.z, sum);
}

void PrintNewSGD(int sgdNum) {
    programLogger->info("|---------------------|");
    programLogger->info("|                     |");
    programLogger->info("|    New SGD Header   |");
    programLogger->info("|         {}          |", sgdNum);
    programLogger->info("|                     |");
    programLogger->info("|                     |");
    programLogger->info("|---------------------|");
}

void PrintBlockInfo(SGDPROCUNITHEADER* pHead, SGDFILEHEADER* pSGDTop) {
    std::string partName = "";

    switch (pHead->iCategory) {
    case VUVN:

        programLogger->info("|---------------------|");
        programLogger->info("|                     |");
        programLogger->info("|                     |");
        programLogger->info("|         {:02d}        |", VUVN);
        programLogger->info("|   VUVN Type: {:#x}    |", pHead->VUVNDesc.ucVectorType);
        programLogger->info("|                     |");
        programLogger->info("|---------------------|");

        return;
    case MESH:

            programLogger->info("|---------------------|");
            programLogger->info("|                     |");
            programLogger->info("|                     |");
            programLogger->info("|         {:02d}          |", MESH);
            programLogger->info("|   MESH Type: {:#x}   |", pHead->VUMeshDesc.ucMeshType);
            programLogger->info("|                     |");
            programLogger->info("|---------------------|");
        return;
    case MATERIAL:
        programLogger->info("----- New Sub Model Part -----");
        partName = GetMaterialPtr(pSGDTop, pHead->VUMaterialDesc.pMat)->strTexName;
        break;
    case COORDINATE:
        partName = "Coord  ";
        break;
    case BOUNDING_BOX:
        partName = "BoundingBox";
        break;
    default:
        partName = "";
        break;
    
    }

    PrintBlockCategory(pHead->iCategory, partName.c_str());
}

void PrintBlockTypeCategory(int iCategory, const char* partName) {
    programLogger->info("|---------------------|");
    programLogger->info("|                     |");
    programLogger->info("|                     |");
    programLogger->info("|         {:02d}          |", iCategory);
    programLogger->info("|   {%=s11l}    |", partName);
    programLogger->info("|                     |");
    programLogger->info("|---------------------|");
}

void PrintBlockCategory(int iCategory, const char *partName) {
    programLogger->info("|---------------------|");
    programLogger->info("|                     |");
    programLogger->info("|                     |");
    programLogger->info("|         {:02d}          |", iCategory);
    programLogger->info("|     {}     |", partName);
    programLogger->info("|                     |");
    programLogger->info("|---------------------|");
}

void PrintPoint(float x, float y, float z) {
    printf("\nPoint : [ %.6f, %.6f, %.6f ]", x, y, z);
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
    programLogger->info("----- End   Block {} -----", i);
}

void InitLogging()
{
    spdlog::set_pattern("[%H:%M:%S] [%n] [%^%l%$] [thread %t] %v");

    std::vector<spdlog::sink_ptr> sinks;
    sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
    sinks.push_back(
            std::make_shared<spdlog::sinks::basic_file_sink_mt>("log.txt"));

    programLogger = std::make_shared<spdlog::logger>(
            PROGRAM_LOGGER, begin(sinks), end(sinks));
    programLogger->info("Setting up loggers");

    spdlog::register_logger(programLogger);
}


