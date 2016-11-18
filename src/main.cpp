//
// Created by Austin Berard on 11/18/16.
//
#include<iostream>
#include <vector>
#include "../include/Vector.h"


using namespace std;
int main(){
//    cout << "Hello World" << endl;
    vector<double> temp = {1,5,2,5};
//
    Vector test(temp);
    cout << test.get(1) << endl;

}
