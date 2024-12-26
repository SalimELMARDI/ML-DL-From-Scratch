#ifndef LMATH_HPP
#define LMATH_HPP

#include <vector>
#include <iostream>

namespace lmath 
{
    class Matrix {
    public:
        Matrix() : rows(0), cols(0) {}  // Add default constructor
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

    Matrix get_ones(size_t n, size_t m = 0);
    Matrix multiplyParallel(const Matrix& A, const Matrix& B);
}

#endif // LMATH_HPP