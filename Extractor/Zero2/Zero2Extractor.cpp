#include "Zero2Extractor.h"

using namespace Zero2;

FileExtractor::FileExtractor(IsoReader *iso_reader,
                             std::filesystem::path output_directory,
                             bool verbose_log)
    : ZeroReader(iso_reader, output_directory, verbose_log)
{
  // If the version is unsupported then we throw std::out_of_range
  // and we fail with the default help message.
  ptr_address_table = std::make_unique<AddressTable>(
      GAME_ADDRESS_TABLE.at(iso_reader->GetGameVersion()));

  // Read CD Dat Table
  ptr_cd_dat = std::make_unique<_CD_DAT_TBL[]>(ptr_address_table->file_count);

  iso_reader->Seek(ptr_address_table->address_cd_dat_table);
  iso_reader->ReadBuffer((char *) &ptr_cd_dat[0],
                         sizeof(_CD_DAT_TBL) * ptr_address_table->file_count);
}

FileExtractor ::~FileExtractor()
{
}

void FileExtractor::ExtractFiles()
{
  uint32_t calc_file_addr = 0;

  for (int file_no = 0; file_no < ptr_address_table->file_count; file_no++)
  {
    if (!GetFileIsExist(file_no))
    {
      continue;
    }

    calc_file_addr = ptr_address_table->address_file_data
                     + (GetFileStartSector(file_no) * PS2_SECTOR_SIZE);

    if (GetFileIsCmp(file_no))
    {
      ExtractCompressedFile(file_no, calc_file_addr,
                            ptr_cd_dat[file_no].cmp_size);
    }
    else
    {
      ExtractRawFile(file_no, calc_file_addr, ptr_cd_dat[file_no].size);
    }
  }
}

bool FileExtractor::ExtractRawFile(int file_no, unsigned int file_address,
                                   unsigned int size)
{
  auto file_path = GetFilePath(file_no);

  printf("Extract File [Addr 0x%08X][ Sz: %08X ] ... %s\n", file_address, size,
         file_path.c_str());

  _read_buffer.resize(size);

  _iso_reader->Seek(file_address);
  _iso_reader->ReadBuffer((char *) _read_buffer.data(), size);

  return SaveFileToDisk(_read_buffer.data(), size,
                        _output_directory / file_path);
}

bool FileExtractor::ExtractCompressedFile(int file_no,
                                          unsigned int file_address,
                                          unsigned int size)
{
  auto file_path = GetFilePath(file_no);
  std::vector<unsigned char> decoded_buffer;

  _read_buffer.resize(size);

  _iso_reader->Seek(file_address);
  _iso_reader->ReadBuffer((char *) _read_buffer.data(), size);

  printf("Decode File [Addr 0x%08X][ Sz: %08X ] ... %s\n", file_address, size,
         file_path.c_str());

  if (!ZeroLess::DecompressBuffer(_read_buffer, decoded_buffer))
  {
    return false;
  }

  return SaveFileToDisk(decoded_buffer.data(), decoded_buffer.size(),
                        _output_directory / file_path);
}

bool FileExtractor::GetFileIsCmp(uint32_t file_no)
{
  if (_game_lookup_data.game_version == GAME_VERSION_PROTO)
  {
    return ptr_cd_dat[file_no].cmp_size != ptr_cd_dat[file_no].size;
  }
  else
  {
    return ptr_cd_dat[file_no].start_sector & 1;
  }
}

bool FileExtractor::GetFileIsExist(uint32_t file_no)
{
  if (_game_lookup_data.game_version == GAME_VERSION_PROTO)
  {
    return (ptr_cd_dat[file_no].size != 0 || ptr_cd_dat[file_no].cmp_size != 0);
  }
  else
  {
    return (ptr_cd_dat[file_no].start_sector >> 1 & 1);
  }
}

uint32_t FileExtractor::GetFileStartSector(uint32_t file_no)
{
  if (_game_lookup_data.game_version == GAME_VERSION_PROTO)
  {
    return ptr_cd_dat[file_no].start_sector;
  }
  else
  {
    return ptr_cd_dat[file_no].start_sector >> 2;
  }
}