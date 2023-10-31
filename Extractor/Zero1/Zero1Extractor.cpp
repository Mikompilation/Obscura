
#include "Zero1Extractor.h"
//#include "Zero1_DirectoryTable.hpp"
//#include "Zero1_FileTable.hpp"

#include "../Constants.h"
#include "../IsoHandler.hpp"

void Zero1Reader::ExtractFiles()
{
  /*
   FileEntry *fileTable = new FileEntry[LookupData.NumFiles];

  // Read File Table
  iso->Seek(LookupData.FileTableStartAddress);
  iso->ReadBuffer((char *) &fileTable[0],
                  sizeof(FileEntry) * LookupData.NumFiles);

  // Iterate over the file table
  for (int i = 0; i < LookupData.NumFiles; i++)
  {
    FileEntry *entry = &fileTable[i];

    if (0 == entry->size || 0 == entry->address)
    {
      continue;
    }

    unsigned int fileAddress =
        LookupData.FileArchiveStartAddress + (entry->address * PS2_SECTOR_SIZE);

    //std::string outputFileName = GetFileNameWithPath(i);
    std::string outputFileName = std::filesystem::current_path().string() + "/bin/"
                                 + std::to_string(i) + ".bin";

    printf("Extracting %d / %d %s...\n", i, LookupData.NumFiles,
           outputFileName.c_str());

    iso->Seek( fileAddress );

    ExportFile = std::fstream(outputFileName.c_str(),
                              std::fstream::binary | std::fstream::out);

    if (false == ExportFile.is_open())
    {
      printf("Critical! Could not open file %s", outputFileName.c_str());
      continue;
    }

    iso->ReadBuffer((char *) fileBuffer.data(), entry->size);
    ExportFile.write((char *) fileBuffer.data(), entry->size);

    ExportFile.close();
  }

  delete[] fileTable;
  */
}