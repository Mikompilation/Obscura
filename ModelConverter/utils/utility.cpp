#include <filesystem>
#include <fstream>
#include "utility.h"
#include "logging.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_write_image.h"

static int image_id = 0;

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
        programLogger->critical("Could not find the file: {}", filename);
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

void SaveImage(int width, int height, int numChannels, void *data) {
    auto filename = ((std::filesystem::current_path() / ".." / "picture" / (std::to_string(image_id) + ".png")));

    stbi_write_png(filename.string().c_str(), width, height, numChannels, data, 0);
    image_id++;
}
