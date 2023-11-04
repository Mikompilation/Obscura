
#pragma once

#include "../Constants.h"
#include "../ZeroReader.h"

namespace Zero1
{
struct AddressTable
{
  int32_t address;
  int32_t size;
};

class FileExtractor : public ZeroReader
{
 public:
  FileExtractor(IsoReader *iso_reader, std::filesystem::path output_directory,
                bool verbose_log = false);

  ~FileExtractor();

  void ExtractFiles() override;
};
}// namespace Zero1