#pragma once

#include "Regions.h"
#include <filesystem>
#include <fstream>

class IsoReader
{
 private:
  std::ifstream _fileStream;
  ZeroGameLookupData _LookupData;

 public:
  IsoReader(std::string isoFileName)
  {
    _fileStream = std::ifstream(isoFileName, std::ios::binary);
  }

  ~IsoReader()
  {
    _fileStream.close();
  }

  bool Seek(std::streamoff offset)
  {
    if (!_fileStream.seekg(offset, std::ios::beg))
    {
      return false;
    }

    return true;
  }

  template<typename T>
  bool Read(T *entry)
  {
    if (!_fileStream.read((char *) (entry), sizeof(T)))
    {
      return false;
    }

    return true;
  }

  bool ReadBuffer(char *buffer, unsigned int length)
  {
    if (!_fileStream.read((char *) &buffer[0], length))
    {
      return false;
    }

    return true;
  }

  ZeroGameLookupData GetLookupData()
  {
    return _LookupData;
  }

  enumGameType GetGameType()
  {
    return _LookupData.GameType;
  }

  bool ValidGameRegion()
  {
    if (_fileStream.fail())
    {
      return false;
    }

    bool isValid = false;
    std::string GameTitle("", GameTitleIdLength);

    for (auto GameLookup : GAME_LOOKUP_DATA)
    {
      _fileStream.seekg(GameLookup.GameTitleOffset, std::ios::beg);
      _fileStream.read(&GameTitle[0], GameTitleIdLength);

      if (0 == GameLookup.GameTitle.compare(GameTitle))
      {
        _LookupData = GameLookup;
        isValid = true;
        break;
      }
    }

    return isValid;
  }
};