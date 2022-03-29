add_library(
MicoLibrary
Mico.cpp
Mico.h
MicoLibrary_data.cpp
MicoLibrary_data.h
MicoLibrary_types.h
rtwtypes.h
tmwtypes.h)

target_include_directories(MicoLibrary PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
