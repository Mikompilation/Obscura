#pragma once

#include <Eigen/Core>
#include <Eigen/src/Core/Matrix.h>

class Texture{
 public:
  Texture(int width, int height, void* rawData);
  void AddPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
  int GetWidth();
  int GetHeight();
  void* GetRawData();
  Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic> GetRed();
  Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic> GetGreen();
  Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic> GetBlue();
  Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic> GetAlpha();
 private:
  int Width;
  int Height;
  void* RawData;
  Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic> R, G, B, A;
  void SetImageDimensions();
};

Texture* CreateTextureFromRawData(int width, int height, void* data);