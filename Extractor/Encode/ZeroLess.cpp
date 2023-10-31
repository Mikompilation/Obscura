#include "ZeroLess.h"
#include "../Utility.h"

bool ZeroLess::DecompressBuffer(
    const std::vector<unsigned char> &encoded_buffer,
    std::vector<unsigned char> &decoded_buffer)
{
  const CMP_HEADER *header = (CMP_HEADER *) &encoded_buffer[0];
  unsigned int decoded_size = 0;

  if (header->ext != LESS_IDENTITY || header->div_num <= 0)
  {
    return false;
  }

  decoded_buffer.resize(header->div_num * header->div_size);
  decoded_size = CMP_Decode(encoded_buffer.data(), decoded_buffer.data());

  // Trim the buffer so that .size() is reliable to us.
  decoded_buffer.resize(decoded_size);

  return (decoded_size == header->size);
}

int ZeroLess::CMP_Decode(const unsigned char *encoded_buffer,
                         unsigned char *decoded_buffer)
{
  const CMP_HEADER *header = (CMP_HEADER *) &encoded_buffer[0];
  const ENCODE_DIV_SECTION *div_section =
      (ENCODE_DIV_SECTION *) (&encoded_buffer[header->div_p]);

  int div_index = 0;
  int offset = 0;
  int no = 0;
  int readoffs = 0;

  if (0 == header->div_num)
  {
    return header->size;
  }

  do
  {
    CMP_DecodeOne(&div_section[no],
                  &encoded_buffer[header->data_offset + offset],
                  decoded_buffer);

    decoded_buffer += header->div_size;

    offset += Utility::GetAlignUp(div_section[no].size, 4);
    div_index = ++no;
  }
  while (div_index < header->div_num);

  return header->size;
}

void ZeroLess::CMP_DecodeOne(const ENCODE_DIV_SECTION *section,
                             const unsigned char *encoded_buffer,
                             unsigned char *decoded_buffer)
{
  if (ENCODE_TYPE_SLIDE == section->type)
  {
    SlideDecode(encoded_buffer, decoded_buffer, section->size);
  }
  else
  {
    memcpy(decoded_buffer, encoded_buffer, section->size);
  }
}

void ZeroLess::SlideDecode(const unsigned char *encoded_buffer,
                           unsigned char *decoded_buffer, int size)
{
  unsigned char rhs = 0;
  unsigned char lhs = 0;
  unsigned int c = 0;
  unsigned int val = 0;

  unsigned int position = SLIDE_START;
  std::vector<unsigned char> buffer(SLIDE_BUFFER_SIZE);

  while (true)
  {
    while (true)
    {
      val = c >> 1;

      if ((val & 0x100) == 0)
      {
        lhs = *encoded_buffer++;

        if (size == 0)
        {
          return;
        }

        val = lhs | 0xffffff00;
        size--;
      }

      c = val & 0xffff;

      if ((val & 0x1) == 0)
      {
        break;
      }

      lhs = *encoded_buffer++;

      if (size == 0)
      {
        return;
      }

      buffer[position] = lhs;
      *decoded_buffer++ = lhs;

      size--;
      position = (++position & SLIDE_MASK);
    }

    lhs = *encoded_buffer;

    if (size == 0)
    {
      break;
    }

    rhs = encoded_buffer[1];

    // Advance the encoded buffer position by 2
    // now that we have our lhs and rhs set.
    encoded_buffer = encoded_buffer + 2;

    if (size == 1)
    {
      return;
    }

    size -= 2;

    // Decode data into buffer
    // Maximum length is rhs low nibble + 2
    for (int i = 0; i <= Utility::GetLowNibble(rhs) + 2; i++)
    {
      val = (lhs | (rhs & 0xF0) << 4) + i;

      buffer[position] = buffer[val & SLIDE_MASK];
      position = (++position & SLIDE_MASK);

      // Store decoded data in the output buffer and advance by 1.
      *decoded_buffer++ = buffer[val & SLIDE_MASK];
    }
  }
}