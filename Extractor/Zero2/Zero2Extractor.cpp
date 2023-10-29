
#include "Zero2Extractor.h"
#include "Zero2_DirectoryTable.hpp"
#include "Zero2_FileTable.hpp"

#include "../Constants.h"
#include "../IsoHandler.h"
#include "../ZeroFileType.h"

void Zero2Reader::ExtractFiles()
{
  FileEntry *fileTable = new FileEntry[LookupData.NumFiles];

  // Read File Table
  iso->Seek(LookupData.FileTableStartAddress);
  iso->ReadBuffer((char *) &fileTable[0],
                  sizeof(FileEntry) * LookupData.NumFiles);

  // Iterate over the file table
  for (int i = 0; i < LookupData.NumFiles; i++)
  {
    FileEntry *entry = &fileTable[i];

    if (0 == entry->isExist)
      continue;

    unsigned int fileSize =
        (entry->isCompressed) ? entry->sizeCompressed : entry->size;

    unsigned int archiveAddress = LookupData.FileArchiveStartAddress
                                  + (entry->start_sector * PS2_SECTOR_SIZE);

    std::string outputFileName = GetFileNameWithPath(i);

    printf("Extracting %d / %d %s...\n", i, LookupData.NumFiles,
           outputFileName.c_str());

    iso->Seek(archiveAddress);

    ExportFile = std::fstream(outputFileName.c_str(),
                              std::fstream::binary | std::fstream::out);

    if (false == ExportFile.is_open())
    {
      printf("Critical! Could not open file %s", outputFileName.c_str());
      continue;
    }

    if (fileSize > 0)
    {
      // The largest file I found in Zero 2 was ~200mb. It's not so bad,
      // but if we need to fragment it then it's fine to change it.
      iso->ReadBuffer((char *) fileBuffer.data(), fileSize);

      if (entry->isCompressed)
      {
        CMP_Decode();
      }
      else
      {
        ExportFile.write((char *) fileBuffer.data(), fileSize);
      }
    }

    ExportFile.close();
  }
}

std::string Zero2Reader::GetFileNameWithPath(int fileId)
{
  auto fileInfo = LookupData.Region == REGION_PAL
                      ? ZERO_2_FILEINFO_EU[fileId]
                      : ZERO_2_FILEINFO_USJP[fileId];

  std::string filename = fileInfo.name;

  std::filesystem::path fullDirectory =
      OutputDirectory / ZERO_2_DIRECTORY_LIST[fileInfo.directory];

  if (!std::filesystem::exists(fullDirectory))
  {
    std::filesystem::create_directories(fullDirectory);
  }

  return (fullDirectory / fileInfo.name).string();
}

int Zero2Reader::CMP_Decode()
{
  const CMP_HEADER *header = (CMP_HEADER *) &fileBuffer[0];
  const ENCODE_DIV_SECTION *div_p =
      (ENCODE_DIV_SECTION *) (&fileBuffer[header->div_p]);

  int div_index = 0;
  int offset = 0;
  int no = 0;
  int remaining = header->size;

  std::vector<unsigned char> decode_buffer(header->div_size);

  if (0 < header->div_num)
  {
    do
    {
      // Encode Buffer Pointer (offset in filebuffer)
      const unsigned char *encode_buf_ptr =
          &fileBuffer[header->data_offset + offset];

      // Decode Buffer Pointers (Just the beginning of the buffer)
      unsigned char *decode_buf_ptr = &decode_buffer[0];

      // Decode a section of the file and store it in the decoded buffer
      CMP_DecodeOne(header, no, encode_buf_ptr, decode_buf_ptr);

      // Save the decoded chunk to the target export file.
      ExportFile.write((char *) decode_buffer.data(),
                       (remaining < header->div_size) ? remaining
                                                      : header->div_size);

      remaining -= header->div_size;

      offset += GetAlignUp(div_p[no].size, 4);
      div_index = ++no;
    }
    while (div_index < header->div_num && remaining > 0);
  }

  return header->size;
}

void Zero2Reader::CMP_DecodeOne(const CMP_HEADER *header, int no,
                                const unsigned char *from_adrs,
                                unsigned char *to_adrs)
{
  ENCODE_DIV_SECTION *div_p = (ENCODE_DIV_SECTION *) &fileBuffer[header->div_p];

  if (1 == div_p[no].type)
  {
    SlideDecode(from_adrs, to_adrs, div_p[no].size);
  }
  else
  {
    memcpy(to_adrs, from_adrs, div_p[no].size);
  }
}

void Zero2Reader::SlideDecode(const unsigned char *base, unsigned char *addrs,
                              int size)
{
  unsigned char rest;
  unsigned char r;
  unsigned int flags;
  int i;
  unsigned int k;
  unsigned int c;
  unsigned char textbuf[4113];  //This may be dynamic to [size]

  for (i = 0; i < 0xfed; i++)
  {
    textbuf[i] = '\0';
  }

  k = 0xfed;
  c = 0;

  while (true)
  {
    while (true)
    {
      flags = c >> 1;

      if ((flags & 0x100) == 0)
      {
        r = *base;
        base = base + 1;

        if (size == 0)
        {
          return;
        }

        flags = r | 0xffffff00;
        size -= 1;
      }

      c = flags & 0xffff;

      if ((flags & 1) == 0)
      {
        break;
      }

      r = *base;
      base = base + 1;

      if (size == 0)
      {
        return;
      }

      textbuf[k] = r;
      size -= 1;
      *addrs = r;
      addrs = addrs + 1;
      k = k + 1 & 0xfff;
    }

    r = *base;

    if (size == 0)
    {
      break;
    }

    rest = base[1];
    base = base + 2;

    if (size == 1)
    {
      return;
    }

    size -= 2;
    i = 0;

    do
    {
      flags = ((unsigned int) r | (rest & 0xf0) << 4) + i;
      *(textbuf + k) = textbuf[flags & 0xfff];
      *addrs = textbuf[flags & 0xfff];
      k = k + 1 & 0xfff;
      addrs = addrs + 1;
      i += 1;
    }
    while (i <= (int) ((rest & 0xf) + 2));
  }
}