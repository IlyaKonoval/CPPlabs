//
// Created by Чемпион on 11.03.2023.
//

#include "Tests.h"
#include <iostream>
#include "laba1/ADD.h"
#include "laba1/change_sign.h"
#include "laba1/complex.h"
#include "laba1/MatrixMulti.h"
int Tests::Test1(){
    ADD a;
    std::cout << "Print 2 numbers"<< std::endl;
    int x,y;
    std::cin>>x >> y;
    std::cout << "Result (pointers):" << std::endl;
    std::cout << ADD::add_pointer(&x,&y) << std::endl;
    std::cout << "Result (links):" << std::endl;
    std::cout << ADD::add_link(x,y) << std::endl;
    return 0;
}

int Tests::Test2(){
    change_sign a;
    std::cout << "Enter integer number" << std::endl;
    int _int;
    std::cin>> _int;
    std::cout << "Changed sign for int (pointer):\n" << change_sign::change_int_point(&_int)<<std::endl;
    std::cout << "Changed sign for int (link):\n" << change_sign::change_int_link(_int)<<std::endl;
    std::cout << "Enter float num" << std::endl;
    float _float;
    std::cin >> _float;
    std::cout << "link\n" << change_sign::change_float_link(_float)<<std::endl;
    std::cout << "pointer\n"<<change_sign::change_float_point(&_float)<<std::endl;
    return 0;
}


int Tests::Test3(){
    double re = 2.5;
    double im = -3.0;
    complex Complex;

    complex::conj_complex_point(&re, &im);
    std::cout << "Conjugate Complex number(pointer): " << re << " + " << im << "i" << std::endl;

    complex::conj_complex_link(re, im);
    std::cout << "Conjugate Complex number(link): " << re << " + " << im << "i" << std::endl;
    return 0;
}

int Tests::Test4(){

    MatrixMulti Matrix;

    float matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float StillMatrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    float scalar = 2.5;

    std::cout << "Matrix:" << std::endl;
    MatrixMulti::printMatrix_3x3(&matrix[0][0]);

    MatrixMulti::multiply_matrix_point(&matrix[0][0], scalar);
    std::cout << "result(point):" << std::endl;
    MatrixMulti::printMatrix_3x3(&matrix[0][0]);

    MatrixMulti::multiply_matrix_link(StillMatrix, scalar);
    std::cout << "result(link)" << std::endl;
    MatrixMulti::printMatrix_3x3(&matrix[0][0]);

    return 0;
}