#pragma once

#include "../Constants.h"
#include "../ZeroReader.h"

namespace Zero1
{
struct _CD_HD_TBL
{
  uint32_t start_sector;
  uint32_t size;
};

struct AddressTable
{
  uint32_t file_count;
  uint32_t address_img_hd;
  uint32_t address_img_bd;
};

// Address Table specific to Zero 1
inline static const std::map<ENUM_GAME_VERSION, AddressTable>
    GAME_ADDRESS_TABLE = {
        {  GAME_VERSION_PAL, {2169, 0x00A63000, 0x384A7800}},
        {GAME_VERSION_NTSCU, {1897, 0x20836000, 0x2083A000}},
        {GAME_VERSION_NTSCJ, {1850, 0x20829000, 0x2082D000}}
};

class FileExtractor : public ZeroReader
{
 private:
  std::unique_ptr<_CD_HD_TBL[]> ptr_hd_table;
  std::unique_ptr<AddressTable> ptr_address_table;

 public:
  FileExtractor(IsoReader *iso_reader, std::filesystem::path obscura_directory,
                std::filesystem::path output_directory,
                bool verbose_log = false);

  ~FileExtractor();

  void ExtractFiles() override;

 private:
  bool ExtractRawFile(int file_no, unsigned int file_address,
                      unsigned int size);
};
}// namespace Zero1