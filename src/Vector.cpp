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


void Vector::set(int i, double val) {
    elements[i] = val;
}

void Vector::print() const{
    for(int i = 0; i < size; i++){
        cout << "[" << elements[i] << "]" << endl;
    }

}

bool Vector::equals(Vector &vectorY) {
    if(size != vectorY.getSize()){
        return false;
    }
    for(int i = 0; i < size; i ++){
        if(this->get(i) != vectorY.get(i)){
            return false;
        }
    }
    return true;
}
