#pragma once

#include "Constants.h"
#include "IsoHandler.hpp"
#include <filesystem>

class ZeroReader
{
 protected:
  IsoReader *iso;
  ZeroGameLookupData GameLookupData;
  std::filesystem::path OutputDirectory;

  std::vector<unsigned char> readBuffer;

  ZeroReader(IsoReader *iso, std::filesystem::path output)
  {
    this->iso = iso;
    this->OutputDirectory = output;
    this->GameLookupData = iso->GetLookupData();
  }

 public:
  virtual ~ZeroReader()
  {
  }

  virtual void ExtractFiles() = 0;

  bool SaveFileToDisk(unsigned char *buffer, unsigned int size,
                      std::filesystem::path filePath)
  {
    std::filesystem::path saveDirectory = filePath.parent_path();

    if (!std::filesystem::exists(saveDirectory))
    {
      std::filesystem::create_directories(saveDirectory);
    }

    std::fstream ExportFile =
        std::fstream(filePath, std::fstream::binary | std::fstream::out);

    if (ExportFile.fail())
    {
      return false;
    }

    ExportFile.write((char *) buffer, size);
    ExportFile.close();

    return true;
  }
};