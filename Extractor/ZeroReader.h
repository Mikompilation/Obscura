#pragma once

#include "Constants.h"
#include "IsoHandler.hpp"
#include <filesystem>

#include <map>
#include <vector>

class ZeroReader
{
 protected:
  IsoReader *_iso_reader;
  ZeroGameLookupData _game_lookup_data;
  std::filesystem::path _output_directory;

  bool _verbose_output;

  std::vector<unsigned char> _read_buffer;

  ZeroReader(IsoReader *iso_reader, std::filesystem::path output_directory,
             bool verbose)
  {
    _iso_reader = iso_reader;
    _output_directory = output_directory;
    _game_lookup_data = iso_reader->GetLookupData();
    _verbose_output = verbose;
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