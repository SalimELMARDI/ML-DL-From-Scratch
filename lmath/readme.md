```
include/lmath/
├── lmath.hpp      (main header)
└── matrix.hpp     (Matrix class)

src/
└── matrix.cpp
```


```cmake


cmake_minimum_required(VERSION 3.10)
project(lmath)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenMP REQUIRED)

add_library(lmath STATIC
    src/matrix.cpp
    src/operations.cpp
)

target_include_directories(lmath PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(lmath PUBLIC OpenMP::OpenMP_CXX)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE lmath)
```

### Usage in Main
```cpp


#include <lmath/lmath.hpp>

int main() {
    lmath::Matrix m;
    // ...existing code...
}
```

### compile and execution 
#### with cmake 

create a file named CMaleLists.txt inside your project root directory and add this text


```txt
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

```

and then run your program using this command line :
```bash

mkdir build && cd build && cmake .. && make && ./main
```

#### with g++ only

go to your project directory and run this command  : 

```bash

g++ -include main.cpp src/lmath.cpp -o main && ./main
```
