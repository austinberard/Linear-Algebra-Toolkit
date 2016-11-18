//
// Created by Austin Berard on 11/18/16.
//

#ifndef LINEAR_ALGEBRA_TOOLKIT_VECTOR_H
#define LINEAR_ALGEBRA_TOOLKIT_VECTOR_H

#include <vector>

using namespace std;
class Vector {
typedef vector<double> vector_d;
private:
    int size;
    vector_d elements;

public:
    Vector(vector_d &elems);
    Vector(int s);
    double get(int i);
    void set(int i, double val);
    int getSize();

    void print();
};


#endif //LINEAR_ALGEBRA_TOOLKIT_VECTOR_H
