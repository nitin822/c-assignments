#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float charge, totalAmount, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name); 
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        charge = units * 1.20;


    } else if (units < 400) {
        charge = units * 1.50;


    } else if (units < 600) {
        charge = units * 1.80;


    } else {
        charge = units * 2.00;
    }


    if (charge > 400) {
        surcharge = charge * 0.15;
    }

    totalAmount = charge + surcharge;

    if (totalAmount < 100) {
        totalAmount = 100;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: Rs. %.2f\n", totalAmount);

    return 0;
}