list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(assimp)

add_subdirectory(third-party)

include_directories(./)

add_executable(ModelConverter
        main.cpp
        game/sgd.h
        game/sgd.cpp
        game/sgd_types.h
        render/tim2.cpp
        render/tim2.h
        utils/logging.cpp
        utils/logging.h
        render/sgdMdl.cpp
        render/sgdMdl.h
        render/tim2.cpp
        render/tim2.h
        game/vif.h
        game/vif.cpp
        game/Mesh.cpp
        game/Mesh.h
        game/Texture.h
        game/Texture.cpp
        game/packfile.h
        game/packfile.cpp
        stb_write_image.h
        game/Model.cpp
        game/Model.h
        math/linalg.cpp
        math/linalg.h
        utils/utility.cpp
        utils/utility.h
        game/Exporter.cpp
        game/Exporter.h
        utils/assimp_utils.cpp
        utils/assimp_utils.h
        game/gra3dSGDData.cpp game/gra3dSGDData.h)

target_link_libraries(ModelConverter PRIVATE spdlog assimp)


