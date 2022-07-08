target_sources(${PROJECT_NAME} PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/hard_test.cpp)
add_test(HardTests ${PROJECT_NAME})