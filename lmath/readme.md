### Plan for Library Organization

1. Create separate header files for each class
2. Create a main header file that includes all components
3. Organize source files similarly
4. Update build system

### Directory Structure
```
include/lmath/
├── lmath.hpp      (main header)
└── matrix.hpp     (Matrix class)

src/
└── matrix.cpp
```

### Implementation

```cpp


#ifndef LMATH_MATRIX_HPP
#define LMATH_MATRIX_HPP

#include <vector>
#include <iostream>

namespace lmath 
{
    class Matrix {
    public:
        Matrix() : rows(0), cols(0) {}
        Matrix(size_t rows, size_t cols, int a = 0);
        Matrix(std::vector<std::vector<double>>& Grid);
        Matrix(std::vector<double> Grid);

        double& operator()(size_t i, size_t j);
        const double& operator()(size_t i, size_t j) const;
        Matrix operator*(Matrix& other);
        size_t getRows() const;
        size_t getCols() const;

        friend std::ostream& operator<<(std::ostream& os, const Matrix& M);

    private:
        size_t rows, cols;
        std::vector<double> data;
    };
}

#endif
```

```cpp


#ifndef LMATH_OPERATIONS_HPP
#define LMATH_OPERATIONS_HPP

#include "matrix.hpp"

namespace lmath 
{
    Matrix get_ones(size_t n, size_t m = 0);
    Matrix multiplyParallel(const Matrix& A, const Matrix& B);
}

#endif
```

```cpp


#ifndef LMATH_HPP
#define LMATH_HPP

#include "matrix.hpp"
#include "operations.hpp"

#endif
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