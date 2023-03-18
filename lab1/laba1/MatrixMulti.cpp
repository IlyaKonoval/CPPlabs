//
// Created by Чемпион on 11.03.2023.
//
#include "MatrixMulti.h"
#include <iostream>
#include <vector>
using namespace std;
void MatrixMulti::printMatrix_3x3(const float *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << *(matrix + i * 3 + j) << " | ";
        }
        std::cout << std::endl;
    }
}

void MatrixMulti::multiply_matrix_link(float (&matrix)[3][3], float scalar) {
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            matrix[i][j] *= scalar;
        }
    }
}

void MatrixMulti::multiply_matrix_point(float *matrix, float scalar) {
    for (int i = 0; i < 9; i++) {
        *(matrix + i) *= scalar;
    }
}
void matrixScalarMultiply(vector<vector<int>>& matrix, int scalar) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}
int Matrix_multiplication_pointer::first() {

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    float number;
    cout << "Number for multiply: " << endl;
    cin >> number;

    matrixScalarMultiply(matrix, number);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int Matrix_multiplication_link::second() {
    int matrix[3][3] = {{2, 3, 4},
                        { 1 ,6,2},
                        {1, 2, 8}};

    float number;
    cout << "Number for multiply: " << endl;
    cin >> number;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            int &p = matrix[i][j];
            p *= number;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}