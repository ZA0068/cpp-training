target_sources(${PROJECT_NAME} PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/easy_test.cpp)
add_test(EasyTests ${PROJECT_NAME})
