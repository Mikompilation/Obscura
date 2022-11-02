#pragma once

#include <string>

/// Fatal Frame 2 constants
inline const int GameTitleIdLength = 0xB;
inline const int US_JP_GAME_TITLE_OFFSET = 0x8A010;
inline const int EU_GAME_TITLE_OFFSET = 0x89810;

enum eRegion {
  UNKNOWN,
  NTSCU,
  NTSCJ,
  PAL
};

struct GameRegion {
  eRegion Region;
  std::string TitleId;
  int NumFiles;
  int FileTableStartAddress;
  int FileTypeTableStartAddress;
  int FileArchiveStartAddress;
};

inline GameRegion UnknownRegion {
    UNKNOWN,
    "",
    0,
    0,
    0,
    0
};

inline GameRegion UsRegion {
    NTSCU,
    "SLUS_207.66",
    0x106B,
    0x2F90B8,
    0x3055C0,
    0x30D40000
};

inline GameRegion JpRegion {
    NTSCJ,
    "SLPS_253.03",
    0x106B,
    0x002F85F8,
    0x304B00,
    0x30D40000
};

inline GameRegion EuRegion {
    PAL,
    "SLES_523.84",
    0x118b,
    0x286FF8,
    0x294280,
    0x493E0000
};