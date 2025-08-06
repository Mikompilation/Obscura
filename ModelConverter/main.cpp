#include "render/sgdMdl.h"
#include "utils/logging.h"

int main(int argc, const char *argv[])
{
  if (argc < 2)
  {
    return -1;
  }

  InitLogging();

  for (int i = 1; i < argc; ++i)
  {
    DisplayFF2Model(argv[i]);
  }
  

  return 0;
}