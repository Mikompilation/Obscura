#include "IsoHandler.h"
#include "Constants.h"
#include "ZeroFileType.h"
#include "deless.h"


void DecompressFile(std::string file)
{
  std::string initialFile = file;
  std::string targetFile = file + ".LED";

  Decompress(initialFile.c_str(), targetFile.c_str());

  std::filesystem::remove(initialFile);
  std::filesystem::rename(targetFile, initialFile);
}