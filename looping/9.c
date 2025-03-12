#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        count++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (count > 0)
        printf("Average: %.2f\n", sum / count);
    else
        printf("No numbers were entered.\n");

    return 0;
}