#include "deless.h"
#include <cstring>
#include <fstream>

char *ReadFullFile(const char *filename) {
    char *buffer;
    std::ifstream infile(filename, std::ios::binary);

    infile.seekg(0, std::ios::end);
    size_t length = infile.tellg();
    infile.seekg(0, std::ios::beg);

    buffer = new char[length];

    infile.read(buffer, length);

    infile.close();

    return buffer;
}

uint GetAlignUp(uint a, int power) {
    return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
}

void SlideDecode(uchar *base, uchar *addrs, int size) {
    byte r;
    byte c;
    uint flags;
    int j;
    uint i;
    uint rest;
    uchar textbuf[4113];

    j = 0xfed;

    do {
        textbuf[j] = '\0';
        j -= 1;
    } while (-1 < j);

    i = 0xfee;
    rest = 0;

    while (true) {
        while (true) {
            flags = rest >> 1;

            if ((flags & 0x100) == 0) {
                c = *base;
                base += 1;

                if (size == 0) {
                    return;
                }

                flags = c | 0xffffff00;
                size -= 1;
            }

            rest = flags & 0xffff;

            if ((flags & 1) == 0) {
                break;
            }

            c = *base;
            base = base + 1;

            if (size == 0) {
                return;
            }

            textbuf[i] = c;
            size -= 1;
            *addrs = c;
            addrs += 1;
            i = i + 1 & 0xfff;
        }

        c = *base;

        if (size == 0) {
            break;
        }

        r = base[1];
        base += 2;

        if (size == 1) {
            return;
        }

        size -= 2;
        j = 0;

        do {
            flags = ((uint) c | (r & 0xf0) << 4) + j;
            j += 1;
            i = i + 1 & 0xfff;
            textbuf[i] = textbuf[flags & 0xfff];
            *addrs = textbuf[flags & 0xfff];
            addrs += 1;
        } while (j <= (int) ((r & 0xf) + 2));
    }
}

int CMP_Decode(CMP_HEADER *header, void *decode_buf) {
    int no = 0;
    int offset = 0;

    if (0 < header->div_num) {
        do {
            CMP_DecodeOne(header, no, (size_t) RelOffsetToPtr<ENCODE_DIV_SECTION>(header, header->data_offset + offset),
                          (size_t) decode_buf);
            decode_buf = RelOffsetToPtr<void>(decode_buf, header->div_size);
            offset += GetAlignUp(RelOffsetToPtr<ENCODE_DIV_SECTION>(header, header->div_p)[no].size, 4);
            no += 1;
        } while (no < header->div_num);
    }
    return header->size;
}

void CMP_DecodeOne(CMP_HEADER *header, int no, size_t from_adrs, size_t to_adrs) {
    auto div_section = &RelOffsetToPtr<ENCODE_DIV_SECTION>(header, header->div_p)[no];

    if (div_section->type == 1) {
        SlideDecode((uchar *) from_adrs, (uchar *) to_adrs, div_section->size);
        return;
    }

    memcpy((void *) to_adrs, (void *) from_adrs, div_section->size);
}

void Decompress(const char *source, const char *target) {
    auto src = ReadFullFile(source);
    auto header = (CMP_HEADER *) src;
    auto dst = new char[header->size];

    CMP_Decode((CMP_HEADER *) src, dst);

    std::fstream file;
    file.open(target, std::ios::app | std::ios::binary);
    file.write(dst, header->size);
    file.close();

    delete[] src;
    delete[] dst;
}
