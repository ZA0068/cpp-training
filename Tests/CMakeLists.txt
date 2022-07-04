project(cpp_practice_test)
add_executable(${PROJECT_NAME}
    main.cpp
)
find_package(GTest REQUIRED)

add_subdirectory(Sources)
target_link_libraries(${PROJECT_NAME} PRIVATE exercises GTest::GTest)