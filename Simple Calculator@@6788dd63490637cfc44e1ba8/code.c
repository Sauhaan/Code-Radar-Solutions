#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    // Taking input in the required format
    if (scanf("%d%c%d", &num1, &operator, &num2) != 3) {
        printf("Error: Invalid input\n");
        return 1;
    }
    
    // Performing the operation based on the operator
    switch(operator) {
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
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    
    return 0;
}