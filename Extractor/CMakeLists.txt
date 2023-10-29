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

        ZeroReader.h
	    Zero1/Zero1Extractor.cpp
	    Zero1/Zero1Extractor.h
    
	    Zero2/Zero2Extractor.cpp
	    Zero2/Zero2Extractor.h
        Zero2/Zero2_DirectoryTable.hpp
        Zero2/Zero2_FileTable.hpp
        )
