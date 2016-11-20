//
// Created by Austin Berard on 11/18/16.
//

#ifndef LINEAR_ALGEBRA_TOOLKIT_VECTOR_H
#define LINEAR_ALGEBRA_TOOLKIT_VECTOR_H

#include <vector>

class Vector {
typedef std::vector<double> vector_d;
private:
    int size;
    vector_d elements;

public:
    Vector(vector_d &elems);
    Vector(int s);
    int getSize() const {return size;}
    double get(int i) const {return elements[i];}
    void set(int i, double val);
    void print() const;
    bool equals(Vector &vectorY);
};


#endif //LINEAR_ALGEBRA_TOOLKIT_VECTOR_H
