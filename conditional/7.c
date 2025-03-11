#include <stdio.h>

int main() {
    int age;
    
    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Check eligibility to vote
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote. You need to be at least 18 years old.\n");
    }
    
    return