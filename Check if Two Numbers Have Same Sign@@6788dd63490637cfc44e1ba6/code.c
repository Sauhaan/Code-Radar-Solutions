#include <stdio.h>
#include <stdbool.h> // For boolean data type (optional, but good practice)

// Function to check if two numbers have the same sign
bool sameSign(int num1, int num2) {
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0)) {
        return true;  // Both positive or both negative
    } else if (num1 == 0 || num2 == 0) {
        return false; // Zero doesn't have a sign, so consider it different
    } else {
        return false; // One positive, one negative
    }
}


int main() {
    int num1, num2;

    // Read two space-separated integers
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Indicate an error
    }

    if (sameSign(num1, num2)) {
        printf("Same Sign\n");
    } else {
        printf("Different Sign\n");
    }

    return 0; // Indicate successful execution
}