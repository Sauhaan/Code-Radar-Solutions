#include <stdio.h>

int main() {
    int month;

    // Input month number
    printf("Input: ");
    scanf("%d", &month);

    // Determine the number of days in the month
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Output: 31\n");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Output: 30\n");
            break;
        case 2:  // February
            printf("Output: 28\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}