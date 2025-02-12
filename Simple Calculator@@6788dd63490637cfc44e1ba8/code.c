#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    // Input: Get two numbers and an operator
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Error: Invalid input for numbers.\n");
        return 1; // Indicate an error
    }
    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        fprintf(stderr, "Error: Invalid input for operator.\n");
        return 1; // Indicate an error
    }

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = (float)num1 + num2;
            break;
        case '-':
            result = (float)num1 - num2;
            break;
        case '*':
            result = (float)num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Error: Division by zero.\n");
                return 1; // Indicate an error
            }
            result = (float)num1 / num2;
            break;
        default:
            fprintf(stderr, "Error: Invalid operator.\n");
            return 1; // Indicate an error
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return 0; // Indicate successful execution
}