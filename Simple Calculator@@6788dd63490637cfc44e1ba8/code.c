#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input two integers and an operator
    printf("Input: ");
    scanf("%d %d %c", &num1, &num2, &op);

    // Perform the operation based on the operator
    switch (op) {
        case '+':
            printf("Output: %d\n", num1 + num2);
            break;
        case '-':
            printf("Output: %d\n", num1 - num2);
            break;
        case '*':
            printf("Output: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Output: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}