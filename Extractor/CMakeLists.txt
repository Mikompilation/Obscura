include_directories(../third-party/argparse)
include_directories(../third-party/json)

add_executable(Extractor
        extractor.h
        extractor.cpp
        
        ../third-party/argparse/argparse.hpp
        ../third-party/json/json.hpp
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