#pragma once

class Texture{
 public:
  ~Texture();
  Texture(int width, int height, void* rawData);
  int GetWidth();
  int GetHeight();
  int GetAddress();
  int SetAddress(int address);
  void* GetRawData();
  unsigned int GetPixel(int i, int j);

private:
  int Width;
  int Height;
  int Address = 0;
  void* RawData;
};

Texture* CreateTextureFromRawData(int width, int height, void* data, int address = 0);