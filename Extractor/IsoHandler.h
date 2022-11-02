#pragma once

#include "Regions.h"
#include <filesystem>
#include <fstream>

namespace IsoHandler {

class Extractor{
 public:
  Extractor(const char *isoFile, const char *outputFolder);
  ~Extractor();
  void Extract();
 private:
  GameRegion _region;
  std::ifstream _fileStream;
  std::filesystem::path _outputFolder;
  void GetGameRegion();
  char* ReadRangeFile(int startAddress, int readLength);
  std::string GetFilenameWithPath(int fileId);
};

void DecompressFile(std::string file);

}