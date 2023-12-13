#pragma once

#include "Constants.h"
#include "IsoHandler.hpp"
#include "json.hpp"
#include <vector>

class ZeroReader
{
 protected:
  bool _verbose_output;
  IsoReader *_iso_reader;
  ZeroGameLookupData _game_lookup_data;

  std::filesystem::path _obscura_directory;
  std::filesystem::path _output_directory;
  std::vector<unsigned char> _read_buffer;
  std::vector<std::string> _file_name_list;

  ZeroReader(IsoReader *iso_reader, std::filesystem::path obscura_directory,
             std::filesystem::path output_directory, bool verbose)
  {
    _iso_reader = iso_reader;
    _obscura_directory = obscura_directory.parent_path();
    _output_directory = output_directory;
    _game_lookup_data = iso_reader->GetLookupData();
    _verbose_output = verbose;
  }

 public:
  virtual ~ZeroReader()
  {
  }

  virtual void ExtractFiles() = 0;

  bool LoadFileDictionary()
  {
    std::string game_serial = _game_lookup_data.game_serial;
    std::filesystem::path file_path =
        _obscura_directory / "ZeroFileDictionary.json";

    std::ifstream file(file_path, std::ios::binary);
    if (!file.is_open())
    {
      return false;
    }

    nlohmann::json root = nlohmann::json::parse(file, nullptr, true, true);

    for (auto entry : root)
    {
      if (game_serial.compare(entry["game_serial"]))
      {
        continue;
      }

      _file_name_list = entry["file_table"];
      break;
    }

    file.close();
    return (_file_name_list.size() > 0);
  }

  std::string GetFilePath(int32_t file_no)
  {
    return _file_name_list[file_no];
  }

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