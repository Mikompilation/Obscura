#include "GsTexture.h"
#include "utils/utility.h"

unsigned int gsmem[1024 * 1024];

int block32[32] =
        {
                0,  1,  4,  5, 16, 17, 20, 21,
                2,  3,  6,  7, 18, 19, 22, 23,
                8,  9, 12, 13, 24, 25, 28, 29,
                10, 11, 14, 15, 26, 27, 30, 31
        };


int columnWord32[16] =
        {
                0,  1,  4,  5,  8,  9, 12, 13,
                2,  3,  6,  7, 10, 11, 14, 15
        };

void writeTexPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data)
{
    unsigned int *src = (unsigned int *)data;
    int startBlockPos = dbp * 64;

    for(int y = dsay; y < dsay + rrh; y++)
    {
        for(int x = dsax; x < dsax + rrw; x++)
        {
            int pageX = x / 64;
            int pageY = y / 32;
            int page  = pageX + pageY * dbw;

            int px = x - (pageX * 64);
            int py = y - (pageY * 32);

            int blockX = px / 8;
            int blockY = py / 8;
            int block  = block32[blockX + blockY * 8];

            int bx = px - blockX * 8;
            int by = py - blockY * 8;

            int column = by / 2;

            int cx = bx;
            int cy = by - column * 2;
            int cw = columnWord32[cx + cy * 8];

            gsmem[startBlockPos + page * 2048 + block * 64 + column * 16 + cw] = *src;
            src++;
        }
    }
}

void readTexPSMCT32(int dbp, int dbw, int dsax, int dsay, int rrw, int rrh, void *data)
{
    unsigned int *src = (unsigned int *)data;
    int startBlockPos = dbp * 64;

    for(int y = dsay; y < dsay + rrh; y++)
    {
        for(int x = dsax; x < dsax + rrw; x++)
        {
            int pageX = x / 64;
            int pageY = y / 32;
            int page  = pageX + pageY * dbw;

            int px = x - (pageX * 64);
            int py = y - (pageY * 32);

            int blockX = px / 8;
            int blockY = py / 8;
            int block  = block32[blockX + blockY * 8];

            int bx = px - blockX * 8;
            int by = py - blockY * 8;

            int column = by / 2;

            int cx = bx;
            int cy = by - column * 2;
            int cw = columnWord32[cx + cy * 8];

            *src = gsmem[startBlockPos + page * 2048 + block * 64 + column * 16 + cw];
            src++;
        }
    }
}

Texture *LoadTim2GsTexture(SGDTRI2FILEHEADER *pTRI2HeadTop)
{
    int image_h = pTRI2HeadTop->gsli.trxreg.RRH;
    int image_w = pTRI2HeadTop->gsli.trxreg.RRW;
    auto data_size = image_w * image_h;
    auto numColors = 0;
    auto clutType = NO_CLUT;
    auto clutColorType = RGBA16;
    auto image_color_index_off = 0;

    switch(pTRI2HeadTop->gsli.bitbltbuf.DPSM)
    {
        case PSMT4:
            clutType = IDTEX4;
            clutColorType = RGBA32;
            numColors = 16;
            image_color_index_off = data_size >> 1;
            break;
        case PSMT8H:
        case PSMT8:
            clutType = IDTEX8;
            clutColorType = RGBA32;
            numColors = 256;
            image_color_index_off = data_size;
            break;
        case PSMCT32:
            clutType = IDTEX8;
            clutColorType = RGBA32;
            numColors = 0;

            //image_h = image_w;
            //data_size = image_w * image_w;
            //image_color_index_off = data_size;
            break;
    }

    auto image_color_index = RelOffsetToPtr<uint8_t>(&pTRI2HeadTop[1], 0);

    auto image_color_data = RelOffsetToPtr<uint8_t>(&image_color_index[image_color_index_off], sizeof(sceGsLoadImage));
    auto image_data = new std::vector<unsigned int>(data_size);

    auto ph = RelOffsetToPtr<TIM2_PICTUREHEADER>(pTRI2HeadTop, 0x50);

    for(auto x = 0; x < image_w; x++)
    {
        for(auto y = 0; y < image_h; y++)
        {
            auto image_offset = x + y * image_w;
            if (pTRI2HeadTop->gsli.bitbltbuf.DPSM == PSMCT32)
            {
                unsigned char r, g, b, a;
                r = image_color_data[image_offset * 4 + 0];
                g = image_color_data[image_offset * 4 + 1];
                b = image_color_data[image_offset * 4 + 2];
                a = image_color_data[image_offset * 4 + 3];
                image_data->data()[image_offset] = (a << 24) | (b << 16) | (g << 8) | r;

                Tim2GetTextureColor(ph, 0, 0, k, i);
            }
            else
            {
                auto index = Tim2GetTexel(image_color_index, x, y, image_w, clutType);
                image_data->data()[image_offset] = Tim2GetClutColor(image_color_data, clutType, clutColorType, numColors, 0, index);
            }
        }
    }

    return CreateTextureFromRawData(image_w, image_h, image_data->data(), pTRI2HeadTop->gsli.bitbltbuf.DBP);
}