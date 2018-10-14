#include <iostream>
#include <vector>
#include <array>
#include <math.h>
#include "matrix.hpp"
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

using namespace std;

Matrix::Matrix() {
    vector<double> myRow(1, 0.0);
    dVec.push_back(myRow);
// add element to row
}

Matrix::Matrix(int n) {
    vector<double> myRow(n,0);
    for (int i = 0; i < n; i++)
        dVec.push_back(myRow);
// add element to row
}

Matrix::Matrix (int r, int c) {
    vector<double> myRow(c,0);
    for (int i = 0; i < r; i++)
        dVec.push_back(myRow);
}

Matrix::Matrix (double arr[]) {
    int size = my_sizeof(arr)/my_sizeof(arr[0]);

    if (size < 0)
        throw "Square root of Size is not integer!";
    int root(round(sqrt(size)));
    if (size != root * root)
        throw "Square root of Size is not integer!";

    int n = sqrt (param);

    vector<double> myRow(n,0);
    for (int i = 0; i < n; i++)
        dVec.push_back(myRow);
    int arrayI = 0;
    for (int i = 0; i < dVec.size(); i++)
    {
        for (int j = 0; j < dVec[i].size(); j++)
        {
            dVec[i][j] = arr[arrayI];
            arrayI++;
        }
        cout << "\n";
    }
}

void Matrix::set_value(int r, int c) {

}

