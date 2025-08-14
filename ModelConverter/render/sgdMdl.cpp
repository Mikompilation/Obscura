#include "sgdMdl.h"
#include "game/Model.h"

void DisplayFF2Model(const char *filename) 
{
  auto file = std::filesystem::path(filename);
  auto mdl = Model(file);
  mdl.ExtractModel();
}