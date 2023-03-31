#pragma once

typedef unsigned int u_int;
typedef unsigned char u_char;
typedef unsigned short u_short;

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

typedef struct { // 0x10
    /// Repeat count (GS primitive data size)
    ///     PACKED mode NREG x NLOOP(qword)
    ///         REGLIST mode NREG x NLOOP(dword)
    ///             IMAGE mode NLOOP(qword)
    long unsigned int NLOOP : 15;

    /// Termination information (End Of Packet)
    ///     0 With following primitive
    ///     1 Without following primitive (End of GS packet)
    long unsigned int EOP : 1;
    long unsigned int pad16 : 16;
    long unsigned int id : 14;

    /// PRIM field enable
    ///     0 Ignores PRIM field
    ///     1 Outputs PRIM field value to PRIM register
    long unsigned int PRE : 1;

    /// Data to be set to the PRIM register of GS
    long unsigned int PRIM : 11;

    /// Data format
    ///     00  PACKED mode
    ///     01  REGLIST mode
    ///     10  IMAGE mode
    ///     11  Disable (Same operation with the IMAGE mode)
    long unsigned int FLG : 2;

    /// Register descriptor
    ///     Number of register descriptors in REGS field
    ///         When the value is 0, the number of descriptors is 16.
    long unsigned int NREG : 4;

    /// PRIM
    long unsigned int REGS0 : 4;

    /// RGBAQ
    long unsigned int REGS1 : 4;

    /// ST
    long unsigned int REGS2 : 4;

    /// UV
    long unsigned int REGS3 : 4;

    /// XYZF2
    long unsigned int REGS4 : 4;

    /// XYZ2
    long unsigned int REGS5 : 4;

    /// TEX0_1
    long unsigned int REGS6 : 4;

    /// TEX0_2
    long unsigned int REGS7 : 4;

    /// CLAMP_1
    long unsigned int REGS8 : 4;

    /// CLAMP_2
    long unsigned int REGS9 : 4;

    /// FOG
    long unsigned int REGS10 : 4;
    long unsigned int REGS11 : 4;

    /// XYZF3
    long unsigned int REGS12 : 4;

    /// XYZ3
    long unsigned int REGS13 : 4;

    /// A+D
    long unsigned int REGS14 : 4;

    /// NOP
    long unsigned int REGS15 : 4;
} sceGifTag;

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

struct G3DVIF1CODE_UNPACK {
    /*   0 */ unsigned int ADDR : 10;
    /*   1 */ unsigned int pad : 4;
    /*   1 */ unsigned int USN : 1;
    /*   1 */ unsigned int FLG : 1;
    /*   2 */ unsigned int NUM : 7;
    /*   3 */ unsigned int CMD : 7;
};

struct G3DVIF1CODE_DIRECT {
    /*   0 */ unsigned int size : 16;
    /*   2 */ unsigned int num : 8;
    /*   3 */ VIFCodeType  cmd : 7;
    /*   3 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_MARK {
    /*   0 */ unsigned int MARK;
    /*   2 */ unsigned int NUM;
    /*   3 */ VIFCodeType CMD;
    /*   3 */ unsigned int irq;
};

struct G3DVIF1CODE_STCYCLE {
    /*   0 */ unsigned int CL : 7;
    /*   1 */ unsigned int WL : 5;
    /*   2 */ unsigned int NUM : 3;
    /*   3 */ VIFCodeType  CMD : 4;
    /*   3 */ unsigned int irq : 1;
};

struct G3DVIF1CODE_OFFSET {
    /*   0 */ unsigned int OFFSET;
    /*   1 */ unsigned int __;
    /*   2 */ unsigned int NUM;
    /*   3 */ VIFCodeType CMD;
    /*   3 */ unsigned int irq;
};

struct G3DVIF1CODE_BASE {
    /*   0 */ unsigned int BASE :   9;
    /*   1 */ unsigned int __   :   5;
    /*   2 */ unsigned int NUM  :   11;
    /*   3 */ VIFCodeType  CMD  :   6;
    /*   3 */ unsigned int irq  :   1;
};

struct G3DVIF1CODE_ITOP {
    /*   0 */ unsigned int ADDR :   9;
    /*   1 */ unsigned int __   :   5;
    /*   2 */ unsigned int NUM  :   8;
    /*   3 */ VIFCodeType  CMD  :   6;
    /*   3 */ unsigned int irq  :   1;
};

struct G3DVIF1CODE_STMOD {
    /*   0 */ unsigned int MODE;
    /*   0 */ unsigned int __;
    /*   2 */ unsigned int NUM;
    /*   3 */ VIFCodeType CMD;
    /*   3 */ unsigned int irq;
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

