//
// Created by dldms on 10/14/2018.
//

#ifndef ASSIGNMENT1_MATRIX_HPP
#define ASSIGNMENT1_MATRIX_HPP
#include <vector>
#define ASSIGNMENT1_MATRIX_HPP
#include <array>
#endif //ASSIGNMENT1_MATRIX_HPP

using namespace std;

class Matrix {
    protected:
        vector <double> dVec;
    public:
        Matrix ();
        Matrix (int n);
        Matrix (int r, int c);
        Matrix (double a[]);
        void set_value(int r, int c);
};