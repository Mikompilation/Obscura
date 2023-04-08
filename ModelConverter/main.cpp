#include "render/sgdMdl.h"

int main(int argc, const char *argv[])
{
  if (argc < 2)
  {
    return -1;
  }

  InitLogging();

  DisplayFF2Model(argv[1]);

  return 0;
}