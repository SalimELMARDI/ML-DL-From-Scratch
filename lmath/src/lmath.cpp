#include "../include/lmath/lmath.hpp"
#include <bits/stdc++.h>

using namespace std;

namespace lmath 
{
    Matrix::Matrix(size_t rows, size_t cols, int a) : rows(rows), cols(cols), data(rows * cols, a) {}

    Matrix::Matrix(std::vector<std::vector<double>>& Grid) : rows(Grid.size()), cols(Grid[0].size()), data(rows * cols) 
    {
        for(size_t i = 0; i < rows; i++) {
            for(size_t j = 0; j < cols; j++) {
                data[i * cols + j] = Grid[i][j];
            }
        }
    }

    Matrix::Matrix(vector<double> Grid) : rows(1), cols(Grid.size()), data(cols) 
    {
        for(size_t i = 0; i < cols; i++) {
            data[i] = Grid[i];
        }
    }

    double& Matrix::operator()(size_t i, size_t j) {
        return data[i * cols + j];
    }

    const double& Matrix::operator()(size_t i, size_t j) const {
        return data[i * cols + j];
    }

    Matrix Matrix::operator*(Matrix& other) {
        // Change to use the free function directly
        return multiplyParallel(*this, other);
    }

    Matrix multiplyParallel(const Matrix& A, const Matrix& B) {
        if (A.getCols() != B.getRows()) {
            throw std::invalid_argument("Matrix dimensions do not match for multiplication");
        }

        size_t rows = A.getRows();
        size_t cols = B.getCols();
        size_t inner = A.getCols();
        Matrix result(rows, cols);

        #pragma omp parallel for
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                double sum = 0;
                for (size_t k = 0; k < inner; ++k) {
                    sum += A(i, k) * B(k, j);
                }
                result(i, j) = sum;
            }
        }

        return result;
    }

    std::ostream& operator<<(std::ostream& os, const Matrix& M) {
        os << "Matrix: [\n";
        for (size_t i = 0; i < M.getRows(); i++) {
            os << "[";
            for (size_t j = 0; j < M.getCols(); j++) {
                os << M(i, j) << " ";
            }
            os << "]\n";
        }
        os << "]";
        return os;
    }

    size_t Matrix::getRows() const { return rows; }
    size_t Matrix::getCols() const { return cols; }

    Matrix get_ones(size_t n, size_t m) {
        if (m == 0) {
            return Matrix(n, n, 1);
        }
        return Matrix(n, m, 1);
    }
}