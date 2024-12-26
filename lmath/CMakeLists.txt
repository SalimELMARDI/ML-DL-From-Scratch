cmake_minimum_required(VERSION 3.10)
project(lmath)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenMP REQUIRED)

# Create library
add_library(lmath STATIC
    src/lmath.cpp
    #add all the source files
)

# Setup include directories
target_include_directories(lmath PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link OpenMP
target_link_libraries(lmath PUBLIC OpenMP::OpenMP_CXX)

# Create executable
add_executable(main main.cpp)
target_link_libraries(main PRIVATE lmath)