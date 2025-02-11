#include <stdio.h>
#include <stdbool.h> // For boolean data type

bool isSquare(int num1, int num2) {
    return (num2 * num2 == num1);
}

int main() {
    int num1, num2;

    // Read two space-separated integers
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Indicate an error
    }

    if (isSquare(num1, num2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0; // Indicate successful execution
}