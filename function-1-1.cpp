// function-1-1.cpp
#include <iostream>
#include "function-1-1.h"

void print_matrix(int array[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
