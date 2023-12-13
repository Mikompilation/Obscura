#pragma once

#include "../Constants.h"
#include "../Encode/ZeroLess.h"
#include "../ZeroReader.h"

namespace Zero3
{
class FileExtractor : public ZeroReader
{
 public:
  FileExtractor(IsoReader *iso_reader, std::filesystem::path obscura_directory,
                std::filesystem::path output_directory,
                bool verbose_log = false);
  ~FileExtractor();

  void ExtractFiles() override;
};
}// namespace Zero3