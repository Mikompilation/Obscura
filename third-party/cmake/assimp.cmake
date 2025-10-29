include(FetchContent)

set(ASSIMP_WARNINGS_AS_ERRORS OFF CACHE BOOL "Disable warnings as errors" FORCE)
set(ASSIMP_BUILD_ASSIMP_TOOLS OFF CACHE BOOL "Disable assimp tools" FORCE)
set(ASSIMP_BUILD_TESTS OFF CACHE BOOL "Disable assimp tests" FORCE)

# No importers will be needed for this project
set(ASSIMP_BUILD_ALL_IMPORTERS_BY_DEFAULT OFF CACHE BOOL "Disable all importers" FORCE)
set(ASSIMP_BUILD_ALL_EXPORTERS_BY_DEFAULT OFF CACHE BOOL "Disable all exporters" FORCE)
set(ASSIMP_BUILD_OBJ_EXPORTER ON CACHE BOOL "Enable OBJ exporter" FORCE)
set(ASSIMP_BUILD_COLLADA_EXPORTER OFF CACHE BOOL "Enable COLLADA exporter" FORCE)
set(ASSIMP_BUILD_FBX_EXPORTER OFF CACHE BOOL "Enable FBX exporter" FORCE)
set(ASSIMP_BUILD_ASSIMP_VIEW OFF CACHE BOOL "Disable assimp view" FORCE)

# Enable GLTF importer and exporter, if importer is not included then exporter build will fail
set(ASSIMP_BUILD_GLTF_EXPORTER ON CACHE BOOL "Enable GLTF exporter" FORCE)
set(ASSIMP_BUILD_GLTF_IMPORTER ON CACHE BOOL "Enable GLTF importer" FORCE)

FetchContent_Declare(
        assimp
        GIT_REPOSITORY https://github.com/assimp/assimp.git
        GIT_TAG v6.0.2
)

FetchContent_MakeAvailable(assimp)