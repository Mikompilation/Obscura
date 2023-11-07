#pragma once

#include "Regions.h"
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
    _file_stream.exceptions(std::ios_base::failbit | std::ios_base::badbit
                            | std::ios_base::eofbit);
  }

  ~IsoReader()
  {
    _file_stream.close();
  }

  bool Seek(std::streamoff offset)
  {
    return (bool) _file_stream.seekg(offset, std::ios::beg);
  }

  template<typename T>
  bool Read(T *entry)
  {
    return (bool) _file_stream.read((char *) (entry), sizeof(T));
  }

  bool ReadBuffer(char *buffer, unsigned int length)
  {
    return (bool) _file_stream.read((char *) &buffer[0], length);
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

  std::string GetGameSerial()
  {
    return _lookup_data.game_serial;
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

      if (game_version.game_serial.compare(game_title) == 0)
      {
        _lookup_data = game_version;
        is_valid_iso = true;
        break;
      }
    }
    return is_valid_iso;
  }
};