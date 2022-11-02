cmake_minimum_required(VERSION 3.20.2)

project(Extractor CXX)

set(CMAKE_CXX_STANDARD 20)

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
