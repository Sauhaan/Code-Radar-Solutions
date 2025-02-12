#include <stdio.h>  

int main() {  
    int num1, num2;  
    char operator;  
    float result;  

    printf("Enter first integer: ");  
    if (scanf("%d", &num1) != 1) {  
        printf("error\n");  
        return 1;   
    }  

    printf("Enter second integer: ");  
    if (scanf("%d", &num2) != 1) {  
        printf("error\n");  
        return 1; 
    }  

    printf("Enter operator (+, -, *, /): ");  
    if (scanf(" %c", &operator) != 1) {  
        printf("error\n");  
        return 1; 
    }  

    switch (operator) {  
        case '+':  
            result = num1 + num2;  
            printf("Result: %.2f\n", result);  
            break;  
        case '-':  
            result = num1 - num2;  
            printf("Result: %.2f\n", result);  
            break;  
        case '*':  
            result = num1 * num2;  
            printf("Result: %.2f\n", result);  
            break;  
        case '/':  
            if (num2 == 0) {  
                printf("error\n");  
            } else {  
                result = (float)num1 / num2;  
                printf("Result: %.2f\n", result);  
            }  
            break;  
        default:  
            printf("error\n");   
            break;  
    }  

    return 0;  
}