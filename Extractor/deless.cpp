#include "deless.h"
#include <cstring>
#include <fstream>
#include <filesystem>

char *ReadFullFile(const char *filename) {
    std::ifstream infile(filename, std::ios::binary);
    auto length = std::filesystem::file_size(filename);

    char *buffer = new char[length];

    infile.read(buffer, length);

    infile.close();

    return buffer;
}

uint GetAlignUp(uint a, int power) {
    return ((a + ~(-1 << (power & 0x1fU))) >> (power & 0x1fU)) << (power & 0x1fU);
}

void SlideDecode(uchar *base, uchar *addrs, int size) {
    byte rest;
    byte r;
    uint flags;
    int i;
    uint k;
    uint c;
    uchar textbuf[4113];

    for (i = 0; i < 0xfee; i++) {
        textbuf[i] = '\0';
    }

    k = 0xfee;
    c = 0;

    while (true) {
        while (true) {
            flags = c >> 1;

            if ((flags & 0x100) == 0) {
                r = *base;
                base = base + 1;

                if (size == 0) {
                    return;
                }

                flags = r | 0xffffff00;
                size -= 1;
            }

            c = flags & 0xffff;

            if ((flags & 1) == 0) {
                break;
            }

            r = *base;
            base = base + 1;

            if (size == 0) {
                return;
            }

            textbuf[k] = r;
            size -= 1;
            *addrs = r;
            addrs = addrs + 1;
            k = k + 1 & 0xfff;
        }

        r = *base;

        if (size == 0) {
            break;
        }

        rest = base[1];
        base = base + 2;

        if (size == 1) {
            return;
        }

        size -= 2;
        i = 0;

        do {
            flags = ((uint) r | (rest & 0xf0) << 4) + i;
            *(textbuf + k) = textbuf[flags & 0xfff];
            *addrs = textbuf[flags & 0xfff];
            k = k + 1 & 0xfff;
            addrs = addrs + 1;
            i += 1;
        } while (i <= (int) ((rest & 0xf) + 2));
    }
}

int CMP_Decode(CMP_HEADER *header, void *decode_buf) {
    if (0 >= header->div_num) {
        return header->size;
    }

    auto div_p = RelOffsetToPtr<ENCODE_DIV_SECTION>(header, header->div_p);
    int offset = 0;

    for (auto no = 0; no < header->div_num; no++) {
        auto encode_section = (int64_t) RelOffsetToPtr<ENCODE_DIV_SECTION>(header, header->data_offset + offset);
        CMP_DecodeOne(header, no, encode_section, (int64_t) decode_buf);
        decode_buf = RelOffsetToPtr<void>(decode_buf, header->div_size);
        offset += GetAlignUp(div_p[no].size, 4);
    }

    return header->size;
}

void CMP_DecodeOne(CMP_HEADER *header, int no, int64_t from_adrs, int64_t to_adrs) {
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

    std::fstream file(target, std::ios::app | std::ios::binary);
    file.write(dst, header->size);
    file.close();

    delete[] src;
    delete[] dst;
}