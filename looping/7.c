#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of even natural numbers to sum: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }

    printf("Sum of first %d even natural numbers: %d\n", n, sum);
    return 0;
}