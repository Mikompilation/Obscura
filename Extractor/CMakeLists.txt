include_directories(../argparse)
include_directories(../json)

add_executable(Extractor
        extractor.h
        extractor.cpp
        
        ../argparse/argparse.hpp
        ../json/json.hpp
        Utility.h
        Utility.cpp
        Regions.h
        IsoHandler.hpp
        Constants.h

        Encode/ZeroLess.cpp
        Encode/ZeroLess.h

        ZeroReader.h

	    Zero1/Zero1Extractor.cpp
	    Zero1/Zero1Extractor.h
    
	    Zero2/Zero2Extractor.cpp
	    Zero2/Zero2Extractor.h
        )

add_custom_target(copy-runtime-files ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/resource/dictionary ${CMAKE_BINARY_DIR}/Obscura
    DEPENDS ${MY_TARGET})