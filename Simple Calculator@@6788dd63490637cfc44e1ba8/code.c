#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    int num1, num2;
    char operator;

    // Read input (two integers and an operator)
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        fprintf(stderr, "Invalid input. Please enter two integers followed by an operator (+, -, *, /).\n");
        exit(1); // Exit with error code
    }

    int result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Error: Division by zero is not allowed.\n");
                exit(1); // Exit with error code
            } else {
                result = num1 / num2;
            }
            break;
        default:
            fprintf(stderr, "Error: Invalid operator. Please use +, -, *, or /.\n");
            exit(1); // Exit with error code
    }

    printf("%d\n", result);

    return 0;
}