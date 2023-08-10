// function-2-3.cpp
#include "function-2-3.h"
// Function to check if an array is a palindrome
bool is_array_palindrome(int integers[], int length) {
    if (length <= 0) {
        return false;
    }

    for (int i = 0; i < length / 2; ++i) {
        if (integers[i] != integers[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Function to calculate the sum of elements in an array
int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }
    return sum;
}

// Function to calculate the sum of elements if array is palindrome, or return -2 if not
int palindrome_sum(int integers[], int length) {
    if (is_array_palindrome(integers, length)) {
        return sum_integers(integers, length);
    } else {
        return -2;
    }
}
