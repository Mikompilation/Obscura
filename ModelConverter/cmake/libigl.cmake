if(TARGET igl::core)
    return()
endif()

set(LIBIGL_USE_STATIC_LIBRARY ON CACHE BOOL "Use libigl as static library" FORCE)

include(FetchContent)
FetchContent_Declare(
        libigl
        GIT_REPOSITORY https://github.com/libigl/libigl.git
        GIT_TAG v2.4.0
)
FetchContent_MakeAvailable(libigl)
