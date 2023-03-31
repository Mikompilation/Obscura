#include "IsoHandler.h"
#include "Constants.h"
#include "ZeroFileType.h"
#include "deless.h"
#include <cstring>

IsoHandler::Extractor::Extractor(const char *isoFile, const char *outputFolder)
{
  this->_outputFolder = std::filesystem::path(outputFolder);
  this->_fileStream = std::ifstream(isoFile, std::ios::binary);
  this->GetGameRegion();

  if (!std::filesystem::exists(this->_outputFolder))
  {
    std::filesystem::create_directory(this->_outputFolder);
  }
}

IsoHandler::Extractor::~Extractor()
{
  this->_fileStream.close();
}

void IsoHandler::Extractor::GetGameRegion()
{
  this->_fileStream.seekg(US_JP_GAME_TITLE_OFFSET, std::ios::beg);

  char title[GameTitleIdLength + 1];
  title[GameTitleIdLength] = '\0';

  this->_fileStream.read(title, GameTitleIdLength);

  if (std::strcmp(UsRegion.TitleId.c_str(), title) == 0)
  {
    this->_region = UsRegion;
    return;
  }

  if (std::strcmp(JpRegion.TitleId.c_str(), title) == 0)
  {
    this->_region = JpRegion;
    return;
  }

  this->_fileStream.seekg(EU_GAME_TITLE_OFFSET, std::ios::beg);
  this->_fileStream.read(title, GameTitleIdLength);

  if (std::strcmp(EuRegion.TitleId.c_str(), title) == 0)
  {
    this->_region = EuRegion;
    return;
  }

  this->_region = UnknownRegion;
}

char *IsoHandler::Extractor::ReadRangeFile(int startAddress, int readLength)
{
  this->_fileStream.seekg(startAddress, std::ios::beg);

  char *buffer = new char[readLength];

  this->_fileStream.read(buffer, readLength);

  return buffer;
}

void IsoHandler::Extractor::Extract()
{
  if (this->_region.Region == UNKNOWN)
  {
    return;
  }

  auto *fileHd = (ZeroFileType::Zero2File *) ReadRangeFile(
      this->_region.FileTableStartAddress,
      this->_region.NumFiles * sizeof(ZeroFileType::Zero2File));

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < this->_region.NumFiles; i++)
  {
    std::string outputFile = GetFilenameWithPath(i);

    if (i == 3490 && (this->_region.Region == NTSCJ || this->_region.Region == NTSCU))
    {
      continue;
    }

    printf("Extracting %d/%d %s\n", i, this->_region.NumFiles - 1,
           outputFile.c_str());

    auto fileStatus =
        (ZeroFileType::FileType)(fileHd[i].info & 0b00000011);

    // Some files index are bugged and have a type File but with a size of 0 bytes
    if (fileStatus == ZeroFileType::NoFile
        || (fileStatus == ZeroFileType::FileNotCompressed
            && fileHd[i].size == 0)
        || (fileStatus == ZeroFileType::FileCompressed
            && fileHd[i].sizeCompressed == 0))
    {
      printf("Ignored\n");
      continue;
    }

    unsigned long startAddress = (fileHd[i].info >> 2) * PS2_SECTOR_SIZE;

    this->_fileStream.seekg(
        this->_region.FileArchiveStartAddress + startAddress, std::ios::beg);

    int size = fileStatus == ZeroFileType::FileNotCompressed
                   ? fileHd[i].size
                   : fileHd[i].sizeCompressed;

    std::fstream file(outputFile.c_str(), std::fstream::binary | std::fstream::out);

    for (int k = 0; k <= size / PS2_SECTOR_SIZE; k++)
    {
      this->_fileStream.read(fileBuffer, PS2_SECTOR_SIZE);
      file.write(fileBuffer, PS2_SECTOR_SIZE);
    }

    file.close();

    if (fileStatus == ZeroFileType::FileCompressed)
    {
      DecompressFile(outputFile);
    }
  }
}

std::string IsoHandler::Extractor::GetFilenameWithPath(int fileId)
{
  auto fileInfo = this->_region.Region == PAL ? filename_dat[fileId]
                                              : filename_dat_us[fileId];

  auto filename = fileInfo.name;

  auto directory = filename_path[fileInfo.directory];

  auto fullDirectory = this->_outputFolder / directory;

  if (!std::filesystem::exists(fullDirectory))
  {
    std::filesystem::create_directories(fullDirectory);
  }

  return (fullDirectory / filename).string();
}

void IsoHandler::DecompressFile(std::string file)
{
  std::string initialFile = file;
  std::string targetFile = file + ".LED";

  Decompress(initialFile.c_str(), targetFile.c_str());

  std::filesystem::remove(initialFile);
  std::filesystem::rename(targetFile, initialFile);
}

/*
 * Extraction Code for FF1
void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile,
std::filesystem::path outputFolder)
{
ZeroFile *fileHd = (ZeroFile *) ReadFullFile(imgHdFile);

std::ifstream fileDataBank(imgBdFile, std::ios::binary);

char fileBuffer[PS2_SECTOR_SIZE];

for (int i = 0; i < NUM_FILES; i++)
{
unsigned long startAddress = fileHd[i].address * PS2_SECTOR_SIZE;

fileDataBank.seekg(startAddress, std::ios::beg);

if (fileHd[i].size == 0)
{
continue;
}

std::string outputFile = GetFilenameWithPath(i, outputFolder);

FILE *pFile = fopen(outputFile.c_str(), "wb+");

for (int k = 0; k <= fileHd[i].size / PS2_SECTOR_SIZE; k++)
{
fileDataBank.read(fileBuffer, PS2_SECTOR_SIZE);
fwrite(&fileBuffer, sizeof(char), PS2_SECTOR_SIZE, pFile);
}

fclose(pFile);
}

fileDataBank.close();
delete[] fileHd;
}
 */
