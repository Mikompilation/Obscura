#pragma once

typedef unsigned int u_int;
typedef unsigned char u_char;
typedef unsigned short u_short;

enum PixelStorageFormat
{
    PSMCT32 = 0b000000,
    PSMCT24 = 0b000001,
    PSMCT16 = 0b000010,
    PCMCT16S = 0b001010,
    PSMT8 = 0b010011,
    PSMT4 = 0b010100,
    PSMT8H = 0b011011,
    PSMT4HL = 0b100100,
    PSMT4HH = 0b101100,
    PSMZ32 = 0b110000,
    PSMZ24 = 0b110001,
    PSMZ16 = 0b110010,
    PSMZ16S = 0b111010,
};

struct _sceDmaTag {
    /*   0 */ u_short qwc;
    /*   2 */ u_char mark;
    /*   3 */ u_char id;
    /*   4 */ struct _sceDmaTag* next;
    /*   8 */ u_int p[2];
};

struct qword
{
    u_char a0;
    u_char a1;
    u_char a2;
    u_char a3;

    u_char a4;
    u_char a5;
    u_char a6;
    u_char a7;

    u_char a8;
    u_char a9;
    u_char a10;
    u_char a11;

    u_char a12;
    u_char a13;
    u_char a14;
    u_char a15;
};

typedef struct {
    unsigned long long ZBP : 9;
    unsigned long long pad09 : 15;
    unsigned long long PSM : 4;
    unsigned long long pad28 : 4;
    unsigned long long ZMSK : 1;
    unsigned long long pad33 : 31;
} sceGsZbuf;

typedef struct {
    unsigned long long SBP : 14; /// Source Buffer Pointer
    unsigned long long pad14 : 2;
    unsigned long long SBW : 6; /// Source Buffer Width
    unsigned long long pad22 : 2;
    unsigned long long SPSM : 6; /// Source Pixel Storage Mode
    unsigned long long pad30 : 2;
    unsigned long long DBP : 14; /// Destination Buffer Pointer (i.e., 0x100 * 256 = 0x10000 bytes into GS memory)
    unsigned long long pad46 : 2;
    unsigned long long DBW : 6; /// Destination Buffer Width in blocks (each block = 64 pixels)
    unsigned long long pad54 : 2;
    unsigned long long DPSM : 6; /// Destination Pixel Storage Mode (e.g., 0x0 = PSMCT32, 32-bit color)
    unsigned long long pad62 : 2;
} sceGsBitbltbuf;

typedef struct {
    unsigned long long SSAX : 11; /// Source X coordinate (in pixels) where the transfer begins. Range 0–2047.
    unsigned long long pad11 : 5;
    unsigned long long SSAY : 11; /// Source Y coordinate (in pixels) where the transfer begins. Range 0–2047.
    unsigned long long pad27 : 5;
    unsigned long long DSAX : 11; /// Destination X coordinate (in pixels) where the transfer begins. Range 0–2047.
    unsigned long long pad43 : 5;
    unsigned long long DSAY : 11; /// Destination Y coordinate (in pixels) where the transfer begins. Range 0–2047.
    unsigned long long DIR : 2; /// X-axis direction: 0 = left→right, 1 = right→left. Y-axis direction: 0 = top→bottom, 1 = bottom→top.
    unsigned long long pad61 : 3;
} sceGsTrxpos;

typedef struct {
    unsigned long long RRW : 12; /// Rectangle Region Width
    unsigned long long pad12 : 20;
    unsigned long long RRH : 12; /// Rectangle Region Height
    unsigned long long pad44 : 20;
} sceGsTrxreg;

typedef struct {
    unsigned long long XDR : 2;
    unsigned long long pad01 : 30;
    unsigned long long pad02 : 32;
} sceGsTrxdir;

struct sceGifTag {
    /// Repeat count (GS primitive data size)
    ///     PACKED mode NREG x NLOOP(qword)
    ///         REGLIST mode NREG x NLOOP(dword)
    ///             IMAGE mode NLOOP(qword)
    unsigned long long NLOOP : 15;

    /// Termination information (End Of Packet)
    ///     0 With following primitive
    ///     1 Without following primitive (End of GS packet)
    unsigned long long EOP : 1;
    unsigned long long pad16 : 16;
    unsigned long long id : 14;

    /// PRIM field enable
    ///     0 Ignores PRIM field
    ///     1 Outputs PRIM field value to PRIM register
    unsigned long long PRE : 1;

    /// Data to be set to the PRIM register of GS
    unsigned long long PRIM : 11;

    /// Data format
    ///     00  PACKED mode
    ///     01  REGLIST mode
    ///     10  IMAGE mode
    ///     11  Disable (Same operation with the IMAGE mode)
    unsigned long long FLG : 2;

    /// Register descriptor
    ///     Number of register descriptors in REGS field
    ///         When the value is 0, the number of descriptors is 16.
    unsigned long long NREG : 4;

    /// PRIM
    unsigned long long REGS0 : 4;

    /// RGBAQ
    unsigned long long REGS1 : 4;

    /// ST
    unsigned long long REGS2 : 4;

    /// UV
    unsigned long long REGS3 : 4;

    /// XYZF2
    unsigned long long REGS4 : 4;

    /// XYZ2
    unsigned long long REGS5 : 4;

    /// TEX0_1
    unsigned long long REGS6 : 4;

    /// TEX0_2
    unsigned long long REGS7 : 4;

    /// CLAMP_1
    unsigned long long REGS8 : 4;

    /// CLAMP_2
    unsigned long long REGS9 : 4;

    /// FOG
    unsigned long long REGS10 : 4;
    unsigned long long REGS11 : 4;

    /// XYZF3
    unsigned long long REGS12 : 4;

    /// XYZ3
    unsigned long long REGS13 : 4;

    /// A+D
    unsigned long long REGS14 : 4;

    /// NOP
    unsigned long long REGS15 : 4;
};

struct sceGsTex0 {
    /// TBP0 (Texture Base Pointer), Start address of texture in VRAM, in units of 64-byte blocks. The GS uses this to find the texture’s first page.
    unsigned long long TBP0 : 14;
    
    /// TBW (Texture Buffer Width), Width of the texture buffer in pages, where a page is 64 pixels wide for PSMCT32/PSMZ32 (32-bit formats). For other formats, the width unit changes.
    unsigned long long TBW : 6;
    
    /// PSM (Pixel Storage Mode), Texture pixel format: PSMCT32 (0), PSMCT24 (1), PSMCT16 (2), PSMT8 (19), PSMT4 (20), etc.
    unsigned long long PSM : 6;
    
    /// Texture Width, Stored as log2(width). Example: TW=8 → 2^8 = 256 pixels wide.
    unsigned long long TW : 4;
    
    /// Texture Height, Stored as log2(height). Example: TH=8 → 2^8 = 256 pixels tall.
    unsigned long long TH : 4;
    
    /// TCC (Texture Color Component), 0 = RGB, 1 = RGBA. This affects how the GS blends and modulates the texture.
    unsigned long long TCC : 1;
    
    /// TFX (Texture Function), How the texture combines with vertex color: 0=MODULATE, 1=DECAL, 2=HIGHLIGHT, 3=HIGHLIGHT2.
    unsigned long long TFX : 2;
    
    /// CBP (CLUT Base Pointer), Base address of the Color Look-Up Table (palette) in VRAM, in 64-byte blocks (used only for paletted textures like PSMT8/4).
    unsigned long long CBP : 14;
    
    /// CPSM (CLUT Pixel Storage Mode), Format of palette entries (usually PSMCT32 or PSMCT16).
    unsigned long long CPSM : 4;
    
    /// CSM (CLUT Storage Mode), 0 = CSM1 (1D palette), 1 = CSM2 (2D palette). Controls how palette entries are arranged in VRAM.
    unsigned long long CSM : 1;
    
    /// CSA (CLUT Entry Offset), Offset (in blocks of 16 colors) inside the CLUT. Lets you pick sub-palettes.
    unsigned long long CSA : 5;
    
    /// CLD (CLUT Load Control), 0 = No load, 1 = Load CLUT, 2/3 = Reserved. Used to trigger CLUT loading.
    unsigned long long CLD : 3;
};

typedef struct {
    unsigned long long LCM : 1;
    unsigned long long pad01 : 1;
    unsigned long long MXL : 3;
    unsigned long long MMAG : 1;
    unsigned long long MMIN : 3;
    unsigned long long MTBA : 1;
    unsigned long long pad10 : 9;
    unsigned long long L : 2;
    unsigned long long pad21 : 11;
    unsigned long long K : 12;
    unsigned long long pad44 : 20;
} sceGsTex1;

struct sceGsLoadImage{
    sceGifTag giftag0;
    sceGsBitbltbuf bitbltbuf;
    unsigned long long bitbltbufaddr;
    sceGsTrxpos trxpos;
    unsigned long long trxposaddr;
    sceGsTrxreg trxreg;
    unsigned long long trxregaddr;
    sceGsTrxdir trxdir;
    unsigned long long trxdiraddr;
    sceGifTag giftag1;
};

enum VIFCodeType : unsigned int
{
    NOP = 0b0000000,
    STCYCLE = 0b0000001,
    OFFSET = 0b0000010,
    BASE = 0b0000011,
    ITOP = 0b0000100,
    STMOD = 0b0000101,
    MSKPATH3 = 0b0000110,
    MARK = 0b0000111,
    FLUSHE = 0b0010000,
    FLUSH = 0b0010001,
    FLUSHA = 0b0010011,
    MSCAL = 0b0010100,
    MSCNT = 0b0010111,
    MSCALF = 0b0010101,
    STMASK = 0b0100000,
    STROW = 0b0110000,
    STCOL = 0b0110001,
    MPG = 0b1001010,
    DIRECT = 0b1010000,
    DIRECThl = 0b1010001,
};

struct G3DVIF1CODE_STCYCLE {
    unsigned int CL : 8;
    unsigned int WL : 8;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_OFFSET {
    unsigned int OFFSET : 10;
    unsigned int __ : 6;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_BASE {
    unsigned int BASE : 8;
    unsigned int __ : 8;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_ITOP {
    unsigned int ADDR : 8;
    unsigned int __ : 8;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_STMOD {
    unsigned int MODE : 2;
    unsigned int __ : 14;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_MARK {
    unsigned int MARK : 16;
    unsigned int NUM : 8;
    unsigned int CMD : 7;
    unsigned int irq : 1;
};

struct G3DVIF1CODE_DIRECT {
    unsigned int size : 16;
    unsigned int num : 8;
    unsigned int cmd : 7;
    unsigned int irq : 1;
};


struct G3DVIF1CODE_UNPACK {
    unsigned int ADDR : 10;
    unsigned int pad : 4;
    unsigned int USN : 1;
    unsigned int FLG : 1;
    unsigned int NUM : 8;
    unsigned int CMD : 8;
};

union G3DVIF1CODE {
    G3DVIF1CODE_STCYCLE stcycle;
    G3DVIF1CODE_OFFSET offset;
    G3DVIF1CODE_BASE base;
    G3DVIF1CODE_ITOP itop;
    G3DVIF1CODE_STMOD stmod;
    G3DVIF1CODE_MARK mark;
    G3DVIF1CODE_DIRECT direct;
    G3DVIF1CODE_UNPACK unpack;
};

