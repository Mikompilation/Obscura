#include "ZeroLess.h"
#include "../Utility.h"

bool ZeroLess::DecompressFromFile(std::string filename,
                                  std::vector<unsigned char> &decoded_buffer)
{
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(0, std::ios::end);
  int fileSize = infile.tellg();
  infile.seekg(0, std::ios::beg);

  std::vector<unsigned char> file_buffer(fileSize);

  infile.read((char *) file_buffer.data(), fileSize);
  infile.close();

  const auto header = (CMP_HEADER *) &file_buffer[0];
  size_t decoded_size = 0;

  if (header->ext != LESS_IDENTITY || header->div_num <= 0)
  {
    return false;
  }

  decoded_buffer.resize(header->div_num * header->div_size);
  decoded_size = CMP_Decode(file_buffer.data(), decoded_buffer.data());

  // Trim the buffer so that .size() is reliable to us.
  decoded_buffer.resize(decoded_size);

  return (decoded_size == header->size);
}

bool ZeroLess::DecompressBuffer(
    const std::vector<unsigned char> &encoded_buffer,
    std::vector<unsigned char> &decoded_buffer)
{
  const auto header = (CMP_HEADER *) &encoded_buffer[0];
  size_t decoded_size = 0;

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

int32_t ZeroLess::CMP_Decode(const unsigned char *encoded_buffer,
                             unsigned char *decoded_buffer)
{
  const auto header = (CMP_HEADER *) &encoded_buffer[0];
  const auto div_section =
      (ENCODE_DIV_SECTION *) (&encoded_buffer[header->div_p]);

  int offset = 0;
  int no = 0;

  if (header->div_num == 0)
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
  }
  while (++no < header->div_num);

  return header->size;
}

void ZeroLess::CMP_DecodeOne(const ENCODE_DIV_SECTION *section,
                             const unsigned char *encoded_buffer,
                             unsigned char *decoded_buffer)
{
  if (section->type == ENCODE_TYPE_SLIDE)
  {
    SlideDecode(encoded_buffer, decoded_buffer, section->size);
  }
  else
  {
    memcpy(decoded_buffer, encoded_buffer, section->size);
  }
}

void ZeroLess::SlideDecode(const unsigned char *in_buffer,
                           unsigned char *out_buffer, size_t size)
{
  int32_t c = 0;
  int32_t rhs = 0;
  int32_t lhs = 0;
  int32_t flags = 0;
  uint32_t r = BUFFER_SIZE - MATCH_LENGTH;

  std::vector<unsigned char> buffer(BUFFER_SIZE + MATCH_LENGTH - 1, 0);
  remaining_size = size;

  while (true)
  {
    if (((flags >>= 1) & 0x0100) == 0)
    {
      if ((lhs = _GetByte(in_buffer)) == END_OF_STREAM)
      {
        return;
      }

      flags = lhs | 0xff00;
    }

    flags = flags & 0xffff;

    if ((flags & 0x1) == 0)
    {
      if ((lhs = _GetByte(in_buffer)) == END_OF_STREAM)
      {
        return;
      }

      if ((rhs = _GetByte(in_buffer)) == END_OF_STREAM)
      {
        return;
      }

      lhs |= ((rhs & 0xF0) << 4);
      rhs = (rhs & 0x0F) + THRESHOLD;

      for (int i = 0; i <= rhs; i++)
      {
        c = buffer[(lhs + i) & (BUFFER_SIZE - 1)];

        _PutByte(c, out_buffer);
        buffer[r] = c;

        r = (++r & (BUFFER_SIZE - 1));
      }
    }
    else
    {
      if ((lhs = _GetByte(in_buffer)) == END_OF_STREAM)
      {
        return;
      }

      buffer[r] = lhs;
      _PutByte(lhs, out_buffer);

      r = (++r & (BUFFER_SIZE - 1));
    }
  }
}