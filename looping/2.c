#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Number: %d, Cube: %d\n", i, i * i * i);
    }

    return 0;
}