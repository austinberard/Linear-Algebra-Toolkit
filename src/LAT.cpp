//
// Created by Austin Berard on 11/18/16.
//

#include "../include/LAT.h"

typedef double scalar;
namespace LAT{

    Vector multiply(Vector &vectorX, Vector &vectorY) {
        return Vector(0);
    }

    Vector multiply(scalar c, Vector &vectorY) {
        return Vector(0);
    }

    Vector add(Vector &vectorX, Vector &vectorY) {
        if(vectorX.getSize() != vectorY.getSize()){
            throw "Can not add vectors of different sizes";
        }
        Vector tmp(vectorX.getSize());
        for(int i = 0; i < vectorX.getSize(); i++){
            double cur = vectorX.get(i) + vectorY.get(i);
            tmp.set(i, cur);
        }
        return tmp;
    }

    Vector cross(Vector &vectorX, Vector &vectorY) {
        return Vector(0);
    }

    bool equal(Vector &vectorX, Vector &vectorY) {
        return false;
    }
}