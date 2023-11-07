#include "Zero1Extractor.h"

using namespace Zero1;

FileExtractor::FileExtractor(IsoReader *iso_reader,
                             std::filesystem::path obscura_directory,
                             std::filesystem::path output_directory,
                             bool verbose_log)
    : ZeroReader(iso_reader, obscura_directory, output_directory, verbose_log)
{
  // If the version is unsupported then we throw std::out_of_range
  // and we fail with the default help message.
  ptr_address_table = std::make_unique<AddressTable>(
      GAME_ADDRESS_TABLE.at(iso_reader->GetGameVersion()));

  // Read HD Table
  ptr_hd_table = std::make_unique<_CD_HD_TBL[]>(ptr_address_table->file_count);

  iso_reader->Seek(ptr_address_table->address_img_hd);
  iso_reader->ReadBuffer((char *) &ptr_hd_table[0],
                         sizeof(_CD_HD_TBL) * ptr_address_table->file_count);
}

FileExtractor ::~FileExtractor()
{
}

void FileExtractor::ExtractFiles()
{
  uint32_t calc_file_addr = 0;
  for (int file_no = 0; file_no < ptr_address_table->file_count; file_no++)
  {
    calc_file_addr = ptr_address_table->address_img_bd
                     + (ptr_hd_table[file_no].start_sector * PS2_SECTOR_SIZE);

    ExtractRawFile(file_no, calc_file_addr, ptr_hd_table[file_no].size);
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