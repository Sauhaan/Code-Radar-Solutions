#include <stdio.h>

int main() {
    int temperature;

    // Read the temperature in Celsius
    if (scanf("%d", &temperature) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Indicate an error
    }

    // Check if freezing or above freezing
    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0; // Indicate successful execution
}