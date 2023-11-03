#pragma once

#include <cstring>
#include <fstream>
#include <string>
#include <vector>

namespace ZeroLess
{
constexpr int LESS_IDENTITY =
    ('L' << 0) | ('E' << 8) | ('S' << 16) | ('S' << 24);

constexpr int BUFFER_SIZE = 4096;
constexpr int MATCH_LENGTH = 18;
constexpr int THRESHOLD = 2;
constexpr int END_OF_STREAM = -1;

static size_t remaining_size = 0;

enum ENCODE_TYPE : int16_t
{
  ENCODE_TYPE_NONE = 0,
  ENCODE_TYPE_SLIDE = 1,
  ENCODE_TYPE_FORCE_WORD = -1
};

struct ENCODE_DIV_SECTION
{
  ENCODE_TYPE type;
  uint16_t size;
};

struct CMP_HEADER
{
  int32_t size;
  int32_t ext;
  int32_t div_size;
  int32_t div_num;
  int32_t data_offset;
  int32_t div_p;
  int32_t mapping;
  int32_t compressed_size;
};

static inline int32_t _GetByte(const unsigned char *&src)
{
  if (remaining_size == 0)
  {
    return END_OF_STREAM;
  }

  remaining_size--;
  return *src++;
}

static inline void _PutByte(unsigned char b, unsigned char *&dst)
{
  // TODO: Maybe add an end of stream check in here...
  *dst++ = b;
}

/*
* Decompress and decode 'LESS' files for Zero 2 and Zero 3.
* 
* @in_encoded_buffer    The encoded buffer to be processed.
* @out_decoded_buffer   Where decoded data will be placed.
* 
* @return TRUE if decoded size matches header size, else FALSE
*/
bool DecompressFromFile(std::string filename,
                        std::vector<unsigned char> &decoded_buffer);

/*
* Decompress and decode 'LESS' files for Zero 2 and Zero 3.
* 
* @in_encoded_buffer    The encoded buffer to be processed.
* @out_decoded_buffer   Where decoded data will be placed.
* 
* @return TRUE if decoded size matches header size, else FALSE
*/
bool DecompressBuffer(const std::vector<unsigned char> &encoded_buffer,
                      std::vector<unsigned char> &decoded_buffer);

/*
* Iterate over sections of the file for decoding
* 
* @encoded_buffer       pointer to beginning of encoded buffer.
* @decoded_buffer       pointer to buffer where decoded data will be placed.
* 
* @return size of decompressed file.
*/
int32_t CMP_Decode(const unsigned char *encoded_buffer,
                   unsigned char *decoded_buffer);

/*
* Decodes a section of a 'LESS' file and places in to decoded_buffer.
* 
* @section              pointer to the section data for the current encoded section
* @encoded_buffer       pointer to beginning of encoded buffer.
* @decoded_buffer       pointer to buffer where decoded data will be placed.
*/
void CMP_DecodeOne(const ENCODE_DIV_SECTION *section,
                   const unsigned char *encoded_buffer,
                   unsigned char *decoded_buffer);

/*
* LZSS decompression algorithm by Haruhiko Okumura, 4/ 6/1989
* 
* @in_buffer            pointer to beginning of encoded buffer.
* @out_buffer           pointer to buffer where decoded data will be placed.
* @size                 length of input data
*/
void SlideDecode(const unsigned char *in_buffer, unsigned char *out_buffer,
                 size_t size);
}// namespace ZeroLess