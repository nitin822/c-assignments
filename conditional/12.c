#include <stdio.h>

int main() {
    int choice;
    float area, base, height, radius, length, width;
    const float PI = 3.14159;

    while (1) {
        printf("\nArea Calculation Menu\n");
        printf("1. Circle\n2. Rectangle\n3. Triangle\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice == 1) {
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle: %.2f\n", area);
        } else if (choice == 2) {
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle: %.2f\n", area);
        } else if (choice == 3) {
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f\n", area);
        } else {
            printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}