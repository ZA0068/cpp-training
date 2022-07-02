add_executable(cpp_practice_test_file main.cpp)
find_package(GTest REQUIRED)

target_link_libraries(cpp_practice_test_file PRIVATE exercises GTest::GTest)
add_test(VeryEasyTests cpp_practice_test_file)