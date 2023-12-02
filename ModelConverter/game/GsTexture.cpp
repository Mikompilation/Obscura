#include "GsTexture.h"
#include "utils/utility.h"

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
            numColors = 0x10;
            image_color_index_off = data_size >> 1;
            break;
        case PSMT8H:
        case PSMT8:
            clutType = IDTEX8;
            clutColorType = RGBA32;
            numColors = 0x100;
            image_color_index_off = data_size;
            break;
        case PSMCT32:
            clutType = RGBA32;
            clutColorType = RGBA32;
            numColors = 0x100;
            image_h = image_w;
            data_size = image_w * image_w;
            image_color_index_off = data_size;
            break;
    }

    auto image_color_index = RelOffsetToPtr<uint8_t>(&pTRI2HeadTop[1], 0);

    auto image_color_data = RelOffsetToPtr<uint8_t>(&image_color_index[image_color_index_off], sizeof(sceGsLoadImage));
    auto image_data = new std::vector<unsigned int>(data_size);

    for(auto x = 0; x < image_w; x++)
    {
        for(auto y = 0; y < image_h; y++)
        {
            auto image_offset = x + y * image_w;
            if (pTRI2HeadTop->gsli.bitbltbuf.DPSM == PSMCT32)
            {
                unsigned char r, g, b, a;
                r = image_color_index[image_offset * 4 + 0];
                g = image_color_index[image_offset * 4 + 1];
                b = image_color_index[image_offset * 4 + 2];
                a = image_color_index[image_offset * 4 + 3];
                image_data->data()[image_offset] = (a << 24) | (b << 16) | (g << 8) | r;
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