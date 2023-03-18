//
// Created by Чемпион on 11.03.2023.
//

#include "MatrixMulti.h"
#include <iostream>
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