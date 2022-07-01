add_library(exercises
    Include/very_easy/very_easy.hpp
    Source/very_easy/very_easy.cpp
)

target_include_directories(exercises
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Include"
)