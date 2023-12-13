#pragma once

#include <argparse.hpp>
#include <filesystem>

#include "IsoHandler.hpp"
#include "Zero1/Zero1Extractor.h"
#include "Zero2/Zero2Extractor.h"
#include "Zero3/Zero3Extractor.h"

void ExtractGameFiles(std::filesystem::path input_iso_path,
                      std::filesystem::path obscura_directory,
                      std::filesystem::path output_directory);