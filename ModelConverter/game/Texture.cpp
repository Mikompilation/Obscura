#include "Texture.h"

Texture *CreateTextureFromRawData(int width, int height, void *data, int address)
{
  if (width <= 0 || height <= 0 || data == nullptr)
  {
    return nullptr;
  }

  auto texture = new Texture(width, height, data);
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
      texture->AddPixel(k, height - 1 - i, pixel->r, pixel->g, pixel->b, pixel->a);
    }
  }

  return texture;
}

Texture::Texture(int width, int height, void* rawData)
{
  this->Width = width;
  this->Height = height;
  this->RawData = rawData;
  this->SetImageDimensions();
}

void Texture::SetImageDimensions()
{
  this->R.resize(this->Width, this->Height);
  this->G.resize(this->Width, this->Height);
  this->B.resize(this->Width, this->Height);
  this->A.resize(this->Width, this->Height);
}

void Texture::AddPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
  this->R(x, y) = r;
  this->G(x, y) = g;
  this->B(x, y) = b;
  this->A(x, y) = a;
}

int Texture::GetWidth()
{
  return this->Width;
}

int Texture::GetHeight()
{
  return this->Height;
}

Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic> Texture::GetRed()
{
  return this->R;
}

Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic> Texture::GetGreen()
{
  return this->G;
}

Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic> Texture::GetBlue()
{
  return this->B;
}

Eigen::Matrix<unsigned char, Eigen::Dynamic, Eigen::Dynamic> Texture::GetAlpha()
{
  return this->A;
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
    return (unsigned int) rawPixel[(i) + (j * this->Width)];
}
