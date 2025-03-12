#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


double seriesSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n = 5;
    printf("Sum of the series: %.2lf\n", seriesSum(n));

    return 0;
}