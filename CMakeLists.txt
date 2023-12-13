cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Disable shared libs" FORCE)
project(Obscura LANGUAGES C CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Obscura)
cmake_policy(SET CMP0077 NEW)

if (UNIX OR APPLE)
    set(CMAKE_ERROR_DEPRECATED OFF)
endif ()

add_subdirectory(third-party)
add_subdirectory(Extractor)
add_subdirectory(ModelConverter)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/resource/ZeroFileDictionary.json DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})