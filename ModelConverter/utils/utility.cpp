#include <filesystem>
#include <fstream>
#include "utility.h"
#include "logging.h"

unsigned int *GetNextUnpackAddr(unsigned int *prim) {
    unsigned int *puVar1;

    do {
        puVar1 = prim;
        prim = puVar1 + 1;
    } while ((*puVar1 & 0x60000000) != 0x60000000);
    return puVar1;
}

char *ReadFullFile(const char *filename) {
    if (!std::filesystem::exists(filename)) {
        programLogger->critical("Could not find the find: {}", filename);
        programLogger->critical("Exiting the application...");
        exit(-1);
    }

    auto fileSize = std::filesystem::file_size(filename);

    char *buffer = new char[fileSize];
    std::ifstream infile(filename, std::ios::binary);
    infile.read(buffer, fileSize);

    infile.close();

    return buffer;
}