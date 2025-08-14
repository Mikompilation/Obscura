#include "render/sgdMdl.h"
#include "utils/logging.h"
#include <filesystem>

int main(int argc, const char *argv[])
{
  InitLogging();
  programLogger->info("ModelConverter started with {} arguments", argc);
  
  if (argc < 2)
  {
    programLogger->error("ModelConverter requires at least 1 argument", argc);
    return -1;
  }
  
  for (int i = 1; i < argc; i++)
  {
    auto extension = std::filesystem::path(argv[i]).extension();
    programLogger->info("Extracting file {} of type {}", argv[i], extension.string());
    DisplayFF2Model(argv[i]);
#ifdef _DEBUG
    break;
#endif
  }
  
  return 0;
}