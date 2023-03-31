include(FetchContent)
FetchContent_Declare(
        assimp
        GIT_REPOSITORY https://github.com/assimp/assimp.git
        GIT_TAG v5.2.5
)

FetchContent_MakeAvailable(assimp)
