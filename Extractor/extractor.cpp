#include "extractor.h"
#include <argparse.hpp>
#include <filesystem>
#include "IsoHandler.h"

void Extractor(const char* iso, const char* output)
{
  auto extractor = IsoHandler::Extractor(iso, output);

  extractor.Extract();
}

int main(int argc, char *argv[])
{
  argparse::ArgumentParser program("Mikompilation Extractor");

  program.add_argument("iso")
      .help("Absolute path with file name to the game's ISO")
      .required();

  program.add_argument("-o", "--output")
      .help("Output folder where all files will be extracted")
      .default_value(std::filesystem::current_path().string());

  try
  {
    program.parse_args(argc, argv);
    Extractor(program.get("iso").c_str(), program.get("output").c_str());
  }
  catch (const std::runtime_error &err)
  {
    std::cerr << err.what() << std::endl;
    std::cerr << program;
    std::exit(1);
  }

  return 0;
}