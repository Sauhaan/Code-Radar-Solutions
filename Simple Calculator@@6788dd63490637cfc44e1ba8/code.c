#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;

    // Read the input
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("Error: Invalid input format.\n");
        return 1; // Indicate an error
    }

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1; // Indicate an error
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Indicate an error
    }

    return 0; // Indicate successful execution
}