#include <stdio.h>

int main() {
    int username, password;

    printf("Enter username (numeric ID): ");
    scanf("%d", &username);
    printf("Enter password (numeric): ");
    scanf("%d", &password);

    if (username == 1234) {  
        if (password == 5678) {  
            printf("Login successful! Welcome User %d.\n", username);
        } else {
            printf("Incorrect password. Access denied.\n");
        }
    } else {
        printf("Invalid username. Access denied.\n");
    }

    return 0;
}