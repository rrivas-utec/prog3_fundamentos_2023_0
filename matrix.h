//
// Created by rudri on 1/9/2023.
//

#pragma once
#include <iostream>

using std::ostream;

using SizeType = size_t;
using Type = int;

class Matrix {
    // Attributes
    Type* data_ = nullptr;
    SizeType rows_ = SizeType {};
    SizeType cols_ = SizeType {};
public:
    // Constructs and Destroy
    explicit Matrix(SizeType rows, SizeType cols);
    Matrix(const Matrix& other);
    Matrix(Matrix&& other) noexcept;
    Matrix& operator=(const Matrix& other);
    Matrix& operator=(Matrix&& other) noexcept;
    ~Matrix();
    // Methods
    [[nodiscard]] SizeType rows() const;
    [[nodiscard]] SizeType cols() const;
    // Operators
    Type& operator() (int i_row, int i_col);
    Type operator() (int i_row, int i_col) const;
    friend ostream& operator<<(ostream& os, const Matrix& m);
};
ostream& operator<<(ostream& os, const Matrix& m);
