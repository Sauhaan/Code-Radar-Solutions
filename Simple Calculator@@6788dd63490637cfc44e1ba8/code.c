#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Error: Invalid input for numbers.\n");
        return 1; 
    }
    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        fprintf(stderr, "Error: Invalid input for operator.\n");
        return 1; 
    }

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
                return 1; 
            }
            result = (float)num1 / num2;
            break;
        default:
            fprintf(stderr, "Error: Invalid operator.\n");
            return 1; 
    }

    printf("Result: %.2f\n", result);

    return 0;
}