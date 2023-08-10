// main-2-3.cpp
#include <iostream>
#include "function-2-3.h"
#include "function-2-3.cpp" // Include the implementations of the functions

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Replace this with your array
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = palindrome_sum(arr, length);

    if (result == -2) {
        std::cout << "The array is not a palindrome." << std::endl;
    } else {
        std::cout << "The array is a palindrome. Sum of elements: " << result << std::endl;
    }

    return 0;
}
