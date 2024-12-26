#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <iostream>

namespace lmath {

    class Matrix {
    public:
        Matrix(size_t rows, size_t cols, int a = 0);
        Matrix(std::vector<std::vector<double>>& Grid);
        Matrix(std::vector<double> Grid);

        double& operator()(size_t i, size_t j);
        Matrix operator*(Matrix& other);

        size_t getRows() const { return rows; }
        size_t getCols() const { return cols; }

    private:
        size_t rows, cols;
        std::vector<double> data;
    };

    std::ostream& operator<<(std::ostream& os, const Matrix& M);

} // namespace lmath

#endif // MATRIX_HPP