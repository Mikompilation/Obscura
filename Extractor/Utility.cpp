
#include "Utility.h"

uint8_t Utility::GetLowNibble(uint8_t src)
{
  return (src & 0x0F);
}

uint32_t Utility::GetAlignUp(uint32_t a, int32_t power)
{
  return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
}