#include "render/sgdMdl.h"

int main(int argc, const char *argv[])
{
  if (argc < 2)
  {
    return -1;
  }

  //DisplayFF2Model(argv[1]);
  //DisplayPK2(argv[1]);

  //DisplayFF2Model(argv[1]);
  DisplayFF2Map(argv[1]);
  return 0;
}