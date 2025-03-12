#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, CI;
    char choice;

    do {
        printf("Enter principal amount: ");
        scanf("%lf", &principal);
        printf("Enter interest rate (in percentage): ");
        scanf("%lf", &rate);
        printf("Enter time period (years): ");
        scanf("%lf", &time);

        amount = principal * pow((1 + rate / 100), time);
        CI = amount - principal;

        printf("Compound Interest: %.2f\n", CI);
        printf("Total Amount: %.2f\n", amount);

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}