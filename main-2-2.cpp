// main-2-2.cpp
#include <iostream>
#include "function-2-2.cpp" // Include the implementation of bin_to_int function

int main() {
    int binary_digits[] = {1, 0, 1, 0}; // Replace this with your binary array
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

    int decimal_value = bin_to_int(binary_digits, number_of_digits);
    
    std::cout << "Binary value: ";
    for (int i = 0; i < number_of_digits; ++i) {
        std::cout << binary_digits[i];
    }
    std::cout << " is equal to decimal value: " << decimal_value << std::endl;

    return 0;
}
