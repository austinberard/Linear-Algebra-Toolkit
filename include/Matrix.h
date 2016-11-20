//
// Created by Austin Berard on 11/20/16.
//

#ifndef LINEAR_ALGEBRA_TOOLKIT_MATRIX_H
#define LINEAR_ALGEBRA_TOOLKIT_MATRIX_H

#include <vector>
#include "Vector.h"

typedef std::vector<double> vector_d;
typedef std::vector<std::vector<double>> vector_vector_d;
typedef std::vector<Vector> vector_V;

class Matrix {
private:
    int m;
    int n;
    vector_vector_d elements;
public:
    Matrix(int m, int n);
    Matrix(int n);
    Matrix(vector_vector_d elems);
    Matrix(vector_V);
    int getM() const { return m;}
    int getN() const { return n;}
    double get(int m, int n) const {return elements[m][n];}
    void set(int m, int n, double val);
    void setRow(int m, Vector vec);
    void setCol(int n, Vector vec);
    void print() const;
    bool equals(Matrix &matrixY);

};


#endif //LINEAR_ALGEBRA_TOOLKIT_MATRIX_H
