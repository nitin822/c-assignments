#include<stdio.h>
int main() {
    float height, width, perimeter;
    printf("Enter Heigth and Width Of REctangle\n");
    scanf("%f %f", &height, &width);
    perimeter = 2 * (height + width);
    printf("%.2f\n", perimeter);
    return 0;
}