include_directories(../argparse)

add_executable(Extractor
        extractor.h
        extractor.cpp
        
        ../argparse/argparse.hpp
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
        Zero2/Zero2_DirectoryTable.hpp
        Zero2/Zero2_FileTable.hpp
        )