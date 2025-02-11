#include <stdio.h>
#include <stdlib.h> // For exit()
#include <ctype.h>  // For isspace()

int main() {
    int num1, num2;
    char operator;

    // Read input, handling potential whitespace
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        fprintf(stderr, "Invalid input format. Please enter two integers followed by an operator (+, -, *, /).\n");
        exit(1);
    }

    // Consume any trailing whitespace after the operator
    while (isspace(getchar())); // or just getchar(); if you only expect a newline.

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
                exit(1);
            } else {
                result = num1 / num2;
            }
            break;
        default:
            fprintf(stderr, "Error: Invalid operator. Please use +, -, *, or /.\n");
            exit(1);
    }

    printf("%d\n", result);

    return 0;
}