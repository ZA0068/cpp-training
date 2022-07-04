target_sources(${PROJECT_NAME} PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/very_easy_test.cpp)
add_test(VeryEasyTests ${PROJECT_NAME})