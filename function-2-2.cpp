// functions.cpp
#include <cmath>
#include "function-2-2.h"

int bin_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    
    for (int i = 0; i < number_of_digits; ++i) {
        result += binary_digits[i] * pow(2, number_of_digits - 1 - i);
    }
    
    return result;
}



