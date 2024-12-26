cmake_minimum_required(VERSION 3.10)
project(lmath)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add the library target
add_library(lmath src/Matrix.cpp)

# Optional: Add an executable for testing
add_executable(test_lmath tests/test.cpp)
target_link_libraries(test_lmath lmath)