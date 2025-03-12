#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, remainder;
    
    while (original > 0) {
        original /= 10;
        digits++;
    }
    
    original = num;
    while (original > 0) {
        remainder = original % 10;
        sum += power(remainder, digits);
        original /= 10;
    }s