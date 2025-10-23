#include "Texture.h"

Texture *CreateTextureFromRawData(int width, int height, void *data, int address)
{
  if (width <= 0 || height <= 0 || data == nullptr)
  {
    return nullptr;
  }

  auto img_data = new unsigned int[width*height];
  auto texture = new Texture(width, height, img_data);
  texture->SetAddress(address);

  auto rawPixel = (unsigned int*) data;

  struct RGBA
  {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
  };

  for (auto i = 0; i < height; i++)
  {
    for (auto k = 0; k < width; k++)
    {
      auto pixel = (RGBA*) &rawPixel[(i * width + k)];
      pixel->a = (char) (255.0f * (pixel->a / 128.0f));
      img_data[(i * width + k)] = *(unsigned int*) pixel;
    }
  }

  return texture;
}

Texture::Texture(int width, int height, void* rawData)
{
  this->Width = width;
  this->Height = height;
  this->RawData = rawData;
}

int Texture::GetWidth()
{
  return this->Width;
}

int Texture::GetHeight()
{
  return this->Height;
}

void *Texture::GetRawData()
{
  return this->RawData;
}

int Texture::GetAddress() {
    return this->Address;
}

int Texture::SetAddress(int address) {
    return this->Address = address;
}

unsigned int Texture::GetPixel(int i, int j) {
    auto rawPixel = (unsigned int*) this->RawData;
    return (unsigned int) rawPixel[(j) + (i * this->Width)];
}
