#ifndef OBSCURA_UTILITY_H
#define OBSCURA_UTILITY_H

#if INTPTR_MAX == INT64_MAX
#include <cstdint>
#endif

template<typename T>
T* RelOffsetToPtr(const void* ptr, const int offset)
{
#if INTPTR_MAX == INT64_MAX
    return (T*)((int64_t )ptr + offset);
#elif INTPTR_MAX == INT32_MAX
    return (T*)((int)ptr + (int)offset);
#endif
}

unsigned int * GetNextUnpackAddr(unsigned int *prim);
char *ReadFullFile(const char *filename);

#endif //OBSCURA_UTILITY_H
