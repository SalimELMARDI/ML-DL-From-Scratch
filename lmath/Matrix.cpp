#include "Matrix.hpp"
#include <stdexcept>
#include <omp.h>
#include <iostream>

namespace lmath {

    Matrix::Matrix(size_t rows, size_t cols, int a) : rows(rows), cols(cols), data(rows * cols, a) {}

    Matrix::Matrix(std::vector<std::vector<double>>& Grid) : rows(Grid.size()), cols(Grid[0].size()), data(rows * cols) {
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < cols; j++) {
                data[i * cols + j] = Grid[i][j];
            }
        }
    }

    Matrix::Matrix(std::vector<double> Grid) : rows(1), cols(Grid.size()), data(cols) {
        for (size_t i = 0; i < cols; i++) {
            data[i] = Grid[i];
        }
    }

    double& Matrix::operator()(size_t i, size_t j) {
        return data[i * cols + j];
    }

    Matrix Matrix::operator*(Matrix& other) {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix dimensions do not match for multiplication");
        }
        Matrix result(rows, other.cols, 0);
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < other.cols; j++) {
                for (size_t k = 0; k < cols; k++) {
                    result(i, j) += (*this)(i, k) * other(k, j);
                }
            }
        }
        return result;
    }

} // namespace lmath

std::ostream& operator<<(std::ostream& os, const lmath::Matrix& M) {
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