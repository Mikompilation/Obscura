#include "extractor.h"
#include "IsoHandler.hpp"
#include <argparse.hpp>
#include <filesystem>

#include "Zero2/Zero2Extractor.h"

constexpr char *OBSCURA_VERSION = "0.3";

int main(int argc, char *argv[])
{
  std::filesystem::path isoFile;
  std::filesystem::path outputDirectory;

  argparse::ArgumentParser program("Mikompilation Extractor", OBSCURA_VERSION);

  program.add_argument("iso")
      .help("Absolute path with file name to the game's ISO")
      .required();

  program.add_argument("-o", "--output")
      .help("Output folder where all files will be extracted")
      .default_value(std::filesystem::current_path().string());

  program.add_description(
      "For more information please visit "
      "https://github.com/wagrenier/Mikompilation");

  try
  {
    program.parse_args(argc, argv);
  
    isoFile = program.get("iso");
    outputDirectory = program.get("output");
  }
  catch (const std::runtime_error &err)
  {
    std::cerr << program;
    std::exit(1);
  }

  IsoReader isoReader(isoFile.string());
  ZeroReader *zeroReader = nullptr;

  if (!isoReader.ValidGameRegion())
  {
    std::cerr << program;
    return 0;
  }

  switch (isoReader.GetGameType())
  {
    case GAME_ZERO_1:
    {
    }
    break;

    case GAME_ZERO_2:
    {
      zeroReader = new Zero2Reader(&isoReader, outputDirectory);
      zeroReader->ExtractFiles();
    }
    break;

    case GAME_ZERO_3:
    {
    }
    break;
  }

  if (zeroReader)
  {
    delete zeroReader;
    zeroReader = nullptr;
  }

  return 0;
}