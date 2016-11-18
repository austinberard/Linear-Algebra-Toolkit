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
    double get(int i);
    void set(int i, double val);
    vector_d add(vector_d &vec);
    vector_d multiply(vector_d &vec);
    vector_d multiply(double s);
    vector_d cross(vector_d &vec);
    bool equal(vector_d &vec);

};


#endif //LINEAR_ALGEBRA_TOOLKIT_VECTOR_H
