//
// Created by Austin Berard on 11/18/16.
//

#include <iostream>
#include "../include/Vector.h"
using namespace std;
typedef vector<double> vector_d;

Vector::Vector(int s) {
    size = s;
    elements = *(new vector_d(size));
}

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

int Vector::getSize() {
    return size;
}

void Vector::print() {
    for(int i = 0; i < size; i++){
        cout << "[" << elements[i] << "]" << endl;
    }

}

bool Vector::equals(Vector &vectorX) {
    if(size != vectorX.getSize()){
        return false;
    }
    for(int i = 0; i < size; i ++){
        if(this->get(i) != vectorX.get(i)){
            return false;
        }
    }
    return true;
}
