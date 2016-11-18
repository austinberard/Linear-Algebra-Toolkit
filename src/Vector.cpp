//
// Created by Austin Berard on 11/18/16.
//

#include "../include/Vector.h"
#include <vector>
#include<iostream>
using namespace std;
typedef vector<double> vector_d;

Vector::Vector(vector_d &elems){
    elements = *(new vector_d(elems));
    size = elements.size();
}

double Vector::get(int i) {
    return elements[i];
}

void Vector::set(int i, double val) {
    elements[i] = val;
}

vector_d Vector::add(vector_d &vec) {
    if(vec.size() != size){
        throw "Cannot add vectors of different sizes";
    }
    vector_d tmp(size);
    for(int i = 0; i < size; i ++){
        tmp[i] = elements[i]+vec[i];
    }
    return tmp;
}

vector_d Vector::multiply(vector_d &vec) {
    return nullptr;
}

vector_d Vector::multiply(double s) {
    return nullptr;
}

vector_d Vector::cross(vector_d &vec) {
    return nullptr;
}

bool Vector::equal(vector_d &vec) {
    return false;
}

