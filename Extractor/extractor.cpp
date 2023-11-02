#include "extractor.h"

constexpr char *OBSCURA_VERSION = "0.3";

int main(int argc, char *argv[])
{
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
    ExtractGameFiles(program.get("iso"), program.get("output"));
  }
  catch (const std::runtime_error &err)
  {
    std::cerr << program;
    std::cerr << err.what();
    std::exit(1);
  }

  return 0;
}

void ExtractGameFiles(std::filesystem::path input_iso_path,
                      std::filesystem::path output_directory)
{
  IsoReader iso_reader(input_iso_path.string());

  std::unique_ptr<ZeroReader> zero_reader;

  if (!iso_reader.ValidGameRegion())
  {
    throw std::exception("Invalid Game Region or ISO.");
  }

  switch (iso_reader.GetGameTitle())
  {
    case GAME_TITLE_ZERO_2:
    {
      zero_reader =
          std::make_unique<Zero2::FileExtractor>(&iso_reader, output_directory);
    }
    break;

    default:
    {
      throw std::exception("Currently not supported!");
    }
    break;
  }

  zero_reader->ExtractFiles();
}