#include "sgdMdl.h"
#include "game/Model.h"

void DisplayFF2Model(const char *filename) {
    auto mdl = Model(std::filesystem::path(filename));
    mdl.ExtractModel();
}