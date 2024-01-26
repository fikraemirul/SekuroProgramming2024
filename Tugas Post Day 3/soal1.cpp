#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<double>> data;
    size_t rows, cols;

public:
    // Konstruktor yang menerima vektor 2D
    Matrix(const std::vector<std::vector<double>>& values) : data(values), rows(values.size()), cols(values[0].size()) {}

    // Konstruktor yang menerima ukuran baris dan kolom serta menginisialisasi dengan nilai awal (default: 0.0)
    Matrix(size_t num_rows, size_t num_cols, double initial = 0.0) : rows(num_rows), cols(num_cols), data(num_rows, std::vector<double>(num_cols, initial)) {}

    // Konstruktor penyalin
    Matrix(const Matrix& other) : data(other.data), rows(other.rows), cols(other.cols) {}

    // Metode untuk menampilkan matrix
    void display() const {
        for (const auto& row : data) {
            for (auto val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }

    // Operator overloading untuk penjumlahan matrix
    Matrix operator+(const Matrix& rhs) const {
        if (this->rows != rhs.rows || this->cols != rhs.cols) {
            throw std::invalid_argument("Dimensi matrix tidak valid!");
        }
        Matrix result(this->rows, this->cols);
        for (size_t i = 0; i < this->rows; ++i) {
            for (size_t j = 0; j < this->cols; ++j) {
                result.data[i][j] = this->data[i][j] + rhs.data[i][j];
            }
        }
        return result;
    }

    // Operator overloading untuk pengurangan matrix
    Matrix operator-(const Matrix& rhs) const {
        if (this->rows != rhs.rows || this->cols != rhs.cols) {
            throw std::invalid_argument("Dimensi matrix tidak valid!");
        }
        Matrix result(this->rows, this->cols);
        for (size_t i = 0; i < this->rows; ++i) {
            for (size_t j = 0; j < this->cols; ++j) {
                result.data[i][j] = this->data[i][j] - rhs.data[i][j];
            }
        }
        return result;
    }

    // Operator overloading untuk perkalian matrix
    Matrix operator*(const Matrix& rhs) const {
        if (this->cols != rhs.rows) {
            throw std::invalid_argument("Perkalian tidak dapat dilakukan. Jumlah kolom pada matrix pertama harus sama dengan jumlah baris pada matrix kedua");
        }
        Matrix result(this->rows, rhs.cols);
        for (size_t i = 0; i < result.rows; ++i) {
            for (size_t j = 0; j < result.cols; ++j) {
                for (size_t k = 0; k < this->cols; ++k) {
                    result.data[i][j] += this->data[i][k] * rhs.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    try {
        Matrix A({{1, 2, 3}, {2, 3, 1}});
        Matrix B({{0, 2, 4}, {1, 2, 5}, {8, 2, 1.2}});
        Matrix C = A - B; // Ini akan menimbulkan pengecualian karena dimensinya tidak sesuai

        A.display();
        B.display();
        C.display();
    }
    catch (const std::exception& e) {
        std::cout << e.what() << '\n';
        // Mengembalikan matrix 1x1 dengan nilai 0
        Matrix errorMatrix(1, 1, 0);
        errorMatrix.display();
    }

    return 0;
}