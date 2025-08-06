#include "render/sgdMdl.h"
#include "utils/logging.h"

int main(int argc, const char *argv[])
{
  InitLogging();
  programLogger->info("ModelConverter started with {} arguments", argc);
  
  if (argc < 2)
  {
    return -1;
  }
  
  for (int i = 1; i < argc; ++i)
  {
    DisplayFF2Model(argv[i]);
  }
  
  return 0;
}