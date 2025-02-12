#include <stdio.h>

int main() {
    int month;

    // Input: Get the month number
    printf("Enter a month number (1-12): ");
    if (scanf("%d", &month) != 1) {
        printf("Invalid month.\n");
        return 1; // Indicate an error
    }

    // Check if the month number is valid
    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 1; // Indicate an error
    }

    // Determine the number of days based on the month
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31\n");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30\n");
            break;
        case 2:  // February (assuming 28 days)
            printf("28\n");
            break;
        default:
            // This case should not be reached due to the input validation above
            printf("Invalid month.\n");
            return 1; // Indicate an error
    }

    return 0; // Indicate successful execution
}