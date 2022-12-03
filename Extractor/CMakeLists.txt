include_directories(../argparse)

add_executable(Extractor
        extractor.h
        extractor.cpp
        deless.h
        deless.cpp
        ../argparse/argparse.hpp
        Regions.cpp Regions.h
        IsoHandler.cpp
        IsoHandler.h
        ZeroFileType.h
        Constants.h
        )
