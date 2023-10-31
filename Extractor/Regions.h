#pragma once

#include <string>
#include <vector>

constexpr int GameTitleIdLength = 0xB;

enum enumGameType
{
  GAME_ZERO_UNKNOWN = 0,
  GAME_ZERO_1,
  GAME_ZERO_2,
  GAME_ZERO_3
};

enum enumGameRegion
{
  REGION_UNKNOWN = 0,
  REGION_NTSCU,
  REGION_NTSCJ,
  REGION_PAL,
  NUM_REGION
};

struct ZeroGameLookupData
{
  std::string GameTitle;
  enumGameType GameType;
  enumGameRegion Region;
  unsigned int GameTitleOffset;
  unsigned int NumFiles;
  unsigned int FileTableStartAddress;
  unsigned int FileTypeTableStartAddress;
  unsigned int FileArchiveStartAddress;
};

const std::vector<ZeroGameLookupData> GAME_LOOKUP_DATA = {
  //  FATAL FRAME 1 US
    {"SLUS_203.88", GAME_ZERO_1, REGION_NTSCU, 0x20000010,  0x768, 0x20836000,
     0x00000000, 0x2083A000},

 // FATAL FRAME 2 US
    {"SLUS_207.66", GAME_ZERO_2, REGION_NTSCU, 0x0008A010, 0x106B, 0x002F90B8,
     0x003055C0, 0x30D40000},

 // FATAL FRAME 2 JP
    {"SLPS_253.03", GAME_ZERO_2, REGION_NTSCJ, 0x0008A010, 0x106B, 0x002F85F8,
     0x00304B00, 0x30D40000},

 // FATAL FRAME 2 EU
    {"SLES_523.84", GAME_ZERO_2,   REGION_PAL, 0x00089810, 0x118B, 0x00286FF8,
     0x00294280, 0x493E0000},

 // FATAL FRAME 2 EU DEBUG
    {"SLES_523.84", GAME_ZERO_2,   REGION_PAL, 0x0019C810, 0x118B, 0x003EDEB8,
     0x003FB218, 0xDA682004},

 // FATAL FRAME 2 EU PROTOTYPE
    {"SLES_999.99", GAME_ZERO_2,   REGION_PAL, 0x00089810, 0x118B, 0x00286FF8,
     0x00294280, 0x493E0000}

  // FATAL FRAME 3
};