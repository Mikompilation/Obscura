
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

  struct ENCODE_DIV_SECTION
  {
    short type;
    unsigned short size;
  };

  struct CMP_HEADER
  {
    int size;
    int ext;
    int div_size;
    int div_num;
    int data_offset;
    int div_p; /* ENCODE_DIV_SECTION */
    int mapping;
    int cmp_size;
  };

  unsigned int fileBufferDataSize;
  std::vector<unsigned char> fileBuffer;

 public:
  Zero2Reader(IsoReader *iso, std::filesystem::path output)
      : ZeroReader(iso, output)
  {
    fileBufferDataSize = 0;
    fileBuffer.resize(256 * 1024 * 1024);
  }

  ~Zero2Reader()
  {
  }

  void ExtractFiles() override;

 private:
  std::string GetFileNameWithPath(int fileId);

  // Decompress
  int CMP_Decode();
  void CMP_DecodeOne(const CMP_HEADER *header, int no,
                     const unsigned char *from_adrs, unsigned char *to_adrs);
  void SlideDecode(const unsigned char *base, unsigned char *addrs, int size);

  // warning: operator '>>' has lower precedence than '+'; '+' will be evaluated first
  // Left shifting -1 is undefined behaviour
  unsigned int GetAlignUp(unsigned int a, int power)
  {
    return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
  }
};