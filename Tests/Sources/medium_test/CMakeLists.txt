target_sources(${PROJECT_NAME} PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/medium_test.cpp)
add_test(MediumTests ${PROJECT_NAME})