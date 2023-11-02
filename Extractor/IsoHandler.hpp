#pragma once

#include "Regions.h"
#include <filesystem>
#include <fstream>

class IsoReader
{
 private:
  std::ifstream _file_stream;
  ZeroGameLookupData _lookup_data;

 public:
  IsoReader(std::string isoFileName)
  {
    _file_stream = std::ifstream(isoFileName, std::ios::binary);
  }

  ~IsoReader()
  {
    _file_stream.close();
  }

  bool Seek(std::streamoff offset)
  {
    if (!_file_stream.seekg(offset, std::ios::beg))
    {
      return false;
    }

    return true;
  }

  template<typename T>
  bool Read(T *entry)
  {
    if (!_file_stream.read((char *) (entry), sizeof(T)))
    {
      return false;
    }

    return true;
  }

  bool ReadBuffer(char *buffer, unsigned int length)
  {
    if (!_file_stream.read((char *) &buffer[0], length))
    {
      return false;
    }

    return true;
  }

  ZeroGameLookupData GetLookupData()
  {
    return _lookup_data;
  }

  ENUM_GAME_TITLE GetGameTitle()
  {
    return _lookup_data.game_title;
  }

  ENUM_GAME_VERSION GetGameVersion()
  {
    return _lookup_data.game_version;
  }

  bool ValidGameRegion()
  {
    if (_file_stream.fail())
    {
      return false;
    }

    bool is_valid_iso = false;
    std::string game_title("", GameTitleIdLength);

    for (auto game_version : GAME_VERSION_TABLE)
    {
      _file_stream.seekg(game_version.game_title_offset, std::ios::beg);
      _file_stream.read(&game_title[0], GameTitleIdLength);

      if (0 == game_version.game_serial.compare(game_title))
      {
        _lookup_data = game_version;
        is_valid_iso = true;
        break;
      }
    }

    return is_valid_iso;
  }
};