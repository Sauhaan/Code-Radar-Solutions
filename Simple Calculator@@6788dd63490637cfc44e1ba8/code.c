#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Read the input (two integers and an operator)
    if (scanf("%d %d %c", &num1, &num2, &operator)!= 3) {
        printf("Invalid input. Please enter two integers followed by an operator (+, -, *, /).\n");
        return 1; // Indicate an error
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
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Indicate an error
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            return 1; // Indicate an error
    }

    printf("%d\n", result); // Print the result

    return 0; // Indicate successful execution
}