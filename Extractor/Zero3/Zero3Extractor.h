
#pragma once

#include "../ZeroReader.h"

class Zero3Reader : public ZeroReader
{
 private:
  struct FileEntry
  {
    unsigned int isCompressed : 1;
    unsigned int isExist : 1;
    unsigned int start_sector : 30;
    int size;
    int sizeCompressed;
  };

 public:
  Zero3Reader(IsoReader *iso, std::filesystem::path output)
      : ZeroReader(iso, output)
  {
  }

  ~Zero3Reader()
  {
  }

  void ExtractFiles() override;

 private:
  std::string GetFileNameWithPath(int fileId);
};