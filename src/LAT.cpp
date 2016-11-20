//
// Created by Austin Berard on 11/18/16.
//

#include "../include/LAT.h"

typedef double scalar;
namespace LAT{

    Vector multiply(Vector &vectorX, Vector &vectorY) {
        if(vectorX.getSize() != vectorY.getSize()){
            throw "Can not multiply vectors of different sizes";
        }

        int sizeOfVec = vectorX.getSize();
        Vector tmp(sizeOfVec);
        for(int i = 0; i < sizeOfVec; i++){
            double cur = vectorX.get(i) * vectorY.get(i);
            tmp.set(i, cur);
        }
        return tmp;
    }

    Vector multiply(scalar c, Vector &vectorX) {
        int sizeOfVec = vectorX.getSize();
        Vector tmp(sizeOfVec);
        for(int i = 0; i < sizeOfVec; i++){
            double cur = vectorX.get(i) * c;
            tmp.set(i, cur);
        }

        return tmp;
    }

    Vector add(Vector &vectorX, Vector &vectorY) {
        if(vectorX.getSize() != vectorY.getSize()){
            throw "Can not add vectors of different sizes";
        }
        int sizeOfVec = vectorX.getSize();
        Vector tmp(sizeOfVec);
        for(int i = 0; i < sizeOfVec; i++){
            double cur = vectorX.get(i) + vectorY.get(i);
            tmp.set(i, cur);
        }
        return tmp;
    }

    Vector cross(Vector &vectorX, Vector &vectorY) {
        //TODO implement functionality
        return Vector(0);
    }

    bool equal(Vector &vectorX, Vector &vectorY) {
        return vectorX.equals(vectorY);
    }
}