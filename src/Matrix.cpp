//
// Created by Austin Berard on 11/20/16.
//

#include "../include/Matrix.h"
using namespace std;
Matrix::Matrix(int m, int n) {
    rows = m;
    cols = n;
    elements = *(new std::vector<std::vector<double>>);

    elements.resize(rows);
    for(int i = 0 ; i < rows ; ++i){
        elements[i].resize(cols);
    }
}

Matrix::Matrix(int n) {
    rows = n;
    cols = n;
    elements = *(new std::vector<std::vector<double>>);
    
    elements.resize(rows);
    for(int i = 0 ; i < rows ; ++i){
        elements[i].resize(cols);
    }

}

Matrix::Matrix(vector_vector_d elems) {

}

Matrix::Matrix(vector_V) {

}

void Matrix::set(int m, int n, double val) {

}

void Matrix::setRow(int m, Vector vec) {

}

void Matrix::setCol(int n, Vector vec) {

}

void Matrix::print() const {

}

bool Matrix::equals(Matrix &matrixY) {
    return false;
}
