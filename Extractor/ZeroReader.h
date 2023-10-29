#pragma once

#include "Constants.h"
#include "IsoHandler.h"
#include <filesystem>

class ZeroReader
{
 protected:
  IsoReader *iso;
  ZeroGameLookupData LookupData;

  std::fstream ExportFile;
  std::filesystem::path OutputDirectory;

  ZeroReader(IsoReader *iso, std::filesystem::path output)
  {
    this->iso = iso;
    this->OutputDirectory = output;
    this->LookupData = iso->GetLookupData();
  }

 public:
  virtual ~ZeroReader()
  {
  }

  virtual void ExtractFiles() = 0;
};