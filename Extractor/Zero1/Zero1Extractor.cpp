
#include "Zero1Extractor.h"

using namespace Zero1;

FileExtractor::FileExtractor(IsoReader *Iso,
                             std::filesystem::path OutputDirectory,
                             bool Verbose)
    : ZeroReader(Iso, OutputDirectory, Verbose)
{
}

FileExtractor ::~FileExtractor()
{
}

void FileExtractor::ExtractFiles()
{
}