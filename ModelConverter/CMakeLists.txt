list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(libigl)
include(assimp)

# Enables plugins of igl
igl_include(glfw)
igl_include(imgui)
igl_include(opengl)

include_directories(./)

add_executable(ModelConverter
        main.cpp
        game/sgd.h
        game/sgd.cpp
        game/sgd_types.h
        render/tim2.cpp
        render/tim2.h
        render/render.h
        render/render.cpp
        render/logging.cpp
        render/logging.h
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
        )

target_link_libraries(ModelConverter PRIVATE igl::glfw igl::imgui igl::opengl assimp)


