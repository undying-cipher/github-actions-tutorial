# INFO: Builds test executable
add_executable(runTests test_main.cpp)

target_link_libraries(runTests gtest gtest_main)
target_link_libraries(runTests PRIVATE CBALib)

add_test(NAME runTests COMMAND runTests)

