#include <stdio.h>


int main() {
    int numbers[100], num, i, found;
    int count = 0;

    printf("Enter numbers (stop when a duplicate is found):\n");

    while (1) {
        scanf("%d", &num);

        found = 0;
        for (i = 0; i < count; i++) {
            if (numbers[i] == num) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("Duplicate number found! Stopping input.\n");
            break;
        }

        numbers[count++] = num;
    }

    return 0;
}