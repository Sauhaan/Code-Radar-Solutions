#include <stdio.h>

int main() {
    int dayNumber;

    // Read the day number
    if (scanf("%d", &dayNumber) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Indicate an error
    }

    // Check the day number and print the day name
    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:  // Handle invalid input (numbers outside 1-7)
            printf("Invalid\n");
    }

    return 0; // Indicate successful execution
}