#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operator;

    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("Error: Invalid input format.\n");
        return 1; 
    }
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
                printf("error\n");
                return 1;
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
            return 1; 
    }

    return 0; 
}