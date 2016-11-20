//
// Created by Austin Berard on 11/18/16.
//

#ifndef LINEAR_ALGEBRA_TOOLKIT_LAT_H
#define LINEAR_ALGEBRA_TOOLKIT_LAT_H

#include "Vector.h"
typedef double scalar;
namespace LAT{
    Vector multiply(Vector &vectorX, Vector &vectorY);
    Vector multiply(scalar c, Vector &vectorX);
    Vector add(Vector &vectorX, Vector &vectorY);
    Vector cross(Vector &vectorX, Vector &vectorY);
    bool equal(Vector &vectorX, Vector &vectorY);
}


#endif //LINEAR_ALGEBRA_TOOLKIT_LAT_H
