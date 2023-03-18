//
// Created by Чемпион on 11.03.2023.
//

#ifndef UNTITLED_MATRIXMULTI_H
#define UNTITLED_MATRIXMULTI_H


class MatrixMulti {
public:
    static void printMatrix_3x3(const float *matrix);
    static void multiply_matrix_link(float (&matrix)[3][3], float scalar);
    static void multiply_matrix_point(float *matrix, float scalar);
};


#endif //UNTITLED_MATRIXMULTI_H
