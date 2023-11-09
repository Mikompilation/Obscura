include_directories(./)
include_directories(../third-party/stb)

add_executable(ModelConverter
        main.cpp

        render/tim2.cpp
        render/tim2.h
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
        game/Model.cpp
        game/Model.h
        math/linalg.cpp
        math/linalg.h
        game/sgd.h
        game/sgd.cpp
        game/sgd_types.h
        game/Exporter.cpp
        game/Exporter.h
        game/gra3dSGDData.cpp
        game/gra3dSGDData.h

        utils/utility.cpp
        utils/utility.h
        utils/logging.cpp
        utils/logging.h
        utils/assimp_utils.cpp
        utils/assimp_utils.h

        ../third-party/stb/stb_write_image.h
        )

target_link_libraries(ModelConverter PRIVATE spdlog assimp)


