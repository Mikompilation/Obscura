#pragma once

#include <cstdint>

template<typename T>
T* RelOffsetToPtr(const void* ptr, const int offset)
{
#if INTPTR_MAX == INT64_MAX
    return (T*)((int64_t )ptr + offset);
#elif INTPTR_MAX == INT32_MAX
    return (T*)((int)ptr + (int)offset);
#endif
}

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char uchar;

struct ENCODE_DIV_SECTION {
    short int type;
    short unsigned int size;
};

struct CMP_HEADER {
    int size;
    int ext;
    int div_size;
    int div_num;
    int data_offset;
    int div_p;
    int mapping;
    int cmp_size;
};

void Decompress(const char *source, const char *target);
void CMP_DecodeOne(CMP_HEADER *header, int no, int64_t from_adrs, int64_t to_adrs);
void SlideDecode(uchar *base, uchar *addrs, int size);
uint GetAlignUp(uint a,int power);

