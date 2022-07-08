add_library(exercises
    Include/header/standards.hpp
    Include/very_easy/very_easy.hpp
    Include/easy/easy.hpp
    Include/medium/medium.hpp
    Include/hard/hard.hpp
    
    Source/very_easy/very_easy.cpp
    Source/easy/easy.cpp
    Source/medium/medium.cpp
    Source/hard/hard.cpp

)

target_include_directories(exercises
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Include"
)