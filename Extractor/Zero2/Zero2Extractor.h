#pragma once

#include "../Constants.h"
#include "../Encode/ZeroLess.h"
#include "../Utility.h"
#include "../ZeroReader.h"

#include "Zero2_DirectoryTable.hpp"
#include "Zero2_FileTable.hpp"

namespace Zero2
{
struct _CD_DAT_TBL
{
  // Note: This is from retail versions of Zero 2.
  // For version compatibility we must avoid using it
  // uint32_t cmp_flg : 1;
  // uint32_t exist_flg : 1;
  // uint32_t start_sector : 30;

  uint32_t start_sector;
  uint32_t size;
  uint32_t cmp_size;
};

// Address offsets for various
struct AddressTable
{
  uint32_t file_count;
  uint32_t address_cd_dat_table;
  uint32_t address_file_data;
};

// Address Table specific to Zero 2
inline static const std::map<ENUM_GAME_VERSION, AddressTable>
    GAME_ADDRESS_TABLE = {
        {  GAME_VERSION_PAL, {4491, 0x00286FF8, 0x493E0000}},
        {GAME_VERSION_NTSCU, {4203, 0x002F90B8, 0x30D40000}},
        {GAME_VERSION_NTSCJ, {4203, 0x002F85F8, 0x30D40000}},
        {GAME_VERSION_DEBUG, {4491, 0x003EDEB8, 0x493E0000}},
        {GAME_VERSION_PROTO, {3077, 0x00286FF8, 0x493E0000}}
};

class FileExtractor : public ZeroReader
{
 private:
  std::unique_ptr<_CD_DAT_TBL[]> ptr_cd_dat;
  std::unique_ptr<AddressTable> ptr_address_table;

 public:
  FileExtractor(IsoReader *iso_reader, std::filesystem::path output_directory,
                bool verbose_log = false);
  ~FileExtractor();

  void ExtractFiles() override;

 private:
  bool ExtractRawFile(int file_no, unsigned int file_address,
                      unsigned int size);

  bool ExtractCompressedFile(int file_no, unsigned int file_address,
                             unsigned int size);

  const std::filesystem::path GetFilePath(uint32_t file_no);
  bool GetFileIsCmp(uint32_t file_no);
  bool GetFileIsExist(uint32_t file_no);
  uint32_t GetFileStartSector(uint32_t file_no);
};
}// namespace Zero2