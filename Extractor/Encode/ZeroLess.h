#pragma once

#include <vector>

namespace ZeroLess
{
constexpr int LESS_IDENTITY =
    ('L' << 0) | ('E' << 8) | ('S' << 16) | ('S' << 24);

constexpr int SLIDE_BUFFER_SIZE = 0x1000;
constexpr int SLIDE_MASK = 0x0FFF;
constexpr int SLIDE_START = 0x0FEE;

enum ENCODE_TYPE : short
{
  ENCODE_TYPE_NONE = 0,
  ENCODE_TYPE_SLIDE = 1,
  ENCODE_TYPE_FORCE_WORD = -1
};

struct ENCODE_DIV_SECTION
{
  ENCODE_TYPE type;
  unsigned short size;
};

struct CMP_HEADER
{
  int size;
  int ext;
  int div_size;
  int div_num;
  int data_offset;
  int div_p;
  int mapping;
  int compressed_size;
};

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
int CMP_Decode(const unsigned char *encoded_buffer,
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

void SlideDecode(const unsigned char *encoded_buffer,
                 unsigned char *decoded_buffer, int size);
}// namespace ZeroLess