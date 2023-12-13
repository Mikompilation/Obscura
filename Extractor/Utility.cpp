
#include "Utility.h"

uint32_t Utility::GetAlignUp(uint32_t a, int32_t power)
{
  return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
}