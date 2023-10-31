
#pragma once

#include "../ZeroReader.h"

class Zero2Reader : public ZeroReader
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
  Zero2Reader(IsoReader *iso, std::filesystem::path output)
      : ZeroReader(iso, output)
  {
    readBuffer.resize(256 * 1024 * 1024);
  }

  ~Zero2Reader()
  {
  }

  void ExtractFiles() override;

 private:
  bool ExtractRawFile(int fileId, unsigned int fileAddress,
                      unsigned int chunkSize);

  bool ExtractCompressedFile(int fileId, unsigned int fileAddress,
                             unsigned int chunkSize);

  std::filesystem::path GetFilePath(int fileId);
};