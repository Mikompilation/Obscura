#include "extractor.h"
#include "IsoHandler.h"
#include <argparse.hpp>
#include <filesystem>

#include "Zero2/Zero2Extractor.h"

void InvalidISOError()
{
  std::cerr << "Failed to parse ISO file.";
  std::cerr << "If this is a valid Zero/Fatal Frame/Project Zero ISO file"
            << std::endl
            << "Then please contact us on our Discord Server: ";
}

// Just added this for debugging without needing to pass arguments
constexpr int DebugMode = 0;

int main(int argc, char *argv[])
{
  std::filesystem::path isoFile;
  std::filesystem::path outputDirectory;

  if (DebugMode)
  {
    isoFile = "HARDCODE YOUR FILE PATH HERE IF DEBUGGING";
    outputDirectory = std::filesystem::current_path() / "output";
  }
  else
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

      isoFile = program.get("iso");
      outputDirectory = program.get("output");
    }
    catch (const std::runtime_error &err)
    {
      std::cerr << err.what() << std::endl;
      std::exit(1);
    }
  }

  IsoReader isoReader(isoFile.string());
  ZeroReader *zeroReader = nullptr;

  if (false == isoReader.ValidGameRegion())
  {
    InvalidISOError();
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