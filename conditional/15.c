#include <stdio.h>

int main() {
    int rollNo, physics, chemistry, computer, total;
    float percentage;
    char name[50];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);
    printf("Input the Name of the Student: ");
    scanf(" %[^\n]", name);
    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer);

    total = physics + chemistry + computer;
    percentage = (float)total / 3;

    printf("\nRoll No : %d\n", rollNo);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", physics);
    printf("Marks in Chemistry : %d\n", chemistry);
    printf("Marks in Computer Application : %d\n", computer);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 60) {
        printf("Division = First\n");
    } else if (percentage >= 50) {
        printf("Division = Second\n");
    } else if (percentage >= 40) {
        printf("Division = Third\n");
    } else {
        printf("Division = Fail\n");
    }

    return 0;
}