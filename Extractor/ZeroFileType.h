#pragma once

namespace ZeroFileType {

struct ZeroFile {
  unsigned int address;
  unsigned int size;
};

struct Zero2File {
  unsigned int info;
  unsigned int size;
  unsigned int sizeCompressed;
};

enum FileType : int
{
  NoFile,
  FileNotCompressed = 2,
  FileCompressed = 3,
  Unknown = 4
};

};