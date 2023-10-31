
#include "Zero2Extractor.h"
#include "Zero2_DirectoryTable.hpp"
#include "Zero2_FileTable.hpp"

#include "../Constants.h"
#include "../Encode/ZeroLess.h"

void Zero2Reader::ExtractFiles()
{
  FileEntry *fileInfoTable = new FileEntry[GameLookupData.NumFiles];

  // Seek to the file table and read it all
  iso->Seek(GameLookupData.FileTableStartAddress);
  iso->ReadBuffer((char *) &fileInfoTable[0],
                  sizeof(FileEntry) * GameLookupData.NumFiles);

  // Iterate over the file table
  for (int fileId = 0; fileId < GameLookupData.NumFiles; fileId++)
  {
    FileEntry *fileInfo = &fileInfoTable[fileId];

    if (0 == fileInfo->isExist)
    {
      continue;
    }

    // Calculate the file address in the ISO
    unsigned int fileAddress = GameLookupData.FileArchiveStartAddress
                               + (fileInfo->start_sector * PS2_SECTOR_SIZE);

    if (fileInfo->isCompressed)
    {
      ExtractCompressedFile(fileId, fileAddress, fileInfo->sizeCompressed);
    }
    else
    {
      ExtractRawFile(fileId, fileAddress, fileInfo->size);
    }
  }

  delete[] fileInfoTable;
}

bool Zero2Reader::ExtractRawFile(int fileId, unsigned int fileAddress,
                                 unsigned int chunkSize)
{
  std::filesystem::path filePath = GetFilePath(fileId);

  printf("Extract File [Addr 0x%08X] ... %ls\n", fileAddress, filePath.c_str());

  // Seek to the file sector and read its contents
  iso->Seek(fileAddress);
  iso->ReadBuffer((char *) readBuffer.data(), chunkSize);

  if (!SaveFileToDisk(readBuffer.data(), chunkSize, OutputDirectory / filePath))
  {
    return false;
  }

  return true;
}

bool Zero2Reader::ExtractCompressedFile(int fileId, unsigned int fileAddress,
                                        unsigned int chunkSize)
{
  std::filesystem::path filePath = GetFilePath(fileId);

  printf("Decode File [Addr 0x%08X] ... %ls\n", fileAddress, filePath.c_str());

  std::vector<unsigned char> decoded_buffer;
  bool success = true;

  // Seek to the file sector and read its contents
  iso->Seek(fileAddress);
  iso->ReadBuffer((char *) readBuffer.data(), chunkSize);

  if (!ZeroLess::DecompressBuffer(readBuffer, decoded_buffer))
  {
    return false;
  }

  if (!SaveFileToDisk(decoded_buffer.data(), decoded_buffer.size(),
                      OutputDirectory / filePath))
  {
    return false;
  }

  return true;
}

std::filesystem::path Zero2Reader::GetFilePath(int fileId)
{
  auto fileInfo = GameLookupData.Region == REGION_PAL
                      ? ZERO_2_FILEINFO_EU[fileId]
                      : ZERO_2_FILEINFO_USJP[fileId];

  return std::filesystem::path(ZERO_2_DIRECTORY_LIST[fileInfo.directory])
         / fileInfo.name;
}