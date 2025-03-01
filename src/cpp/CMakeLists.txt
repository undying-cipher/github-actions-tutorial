# INFO: Custom CBA library
add_library(CBALib STATIC GameObject.cpp Transform.cpp)

# INFO: Build program
add_executable(${PROJECT_NAME} main.cpp)

# INFO: Link lib
target_link_libraries(${PROJECT_NAME} CBALib)

