#include <stdio.h>

int main() {
    int age, citizenStatus;

    // Read age and citizen status
    if (scanf("%d %d", &age, &citizenStatus) != 2) {
        printf("Invalid input. Please enter two integers (age and citizen status).\n");
        return 1; // Indicate an error
    }

    // Check eligibility
    if (age >= 18 && citizenStatus == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0; // Indicate successful execution
}