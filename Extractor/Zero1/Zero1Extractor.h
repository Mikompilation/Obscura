
#pragma once

#include "../ZeroReader.h"

class Zero1Reader : public ZeroReader
{
 private:
  struct FileEntry
  {
    int address;
    int size;
  };

  unsigned int fileBufferDataSize;
  std::vector<unsigned char> fileBuffer;

 public:
  Zero1Reader(IsoReader *iso, std::filesystem::path output)
      : ZeroReader(iso, output)
  {
    fileBufferDataSize = 0;
    fileBuffer.resize(256 * 1024 * 1024);
  }

  ~Zero1Reader()
  {
  }

  void ExtractFiles() override;

 private:
  std::string GetFileNameWithPath(int fileId);
};