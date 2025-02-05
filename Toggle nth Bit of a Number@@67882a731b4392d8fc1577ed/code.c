#include <stdio.h>

// Function to toggle the nth bit of the number
int toggleNthBit(int num, int n) {
    // Create a bitmask with the nth bit set to 1
    int mask = 1 << n;
    // Perform XOR to toggle the nth bit
    return num ^ mask;
}

int main() {
    int number, position;

    // Print the welcome message
    printf("%s\n", welcome());

    // Read input: the number and the bit position to toggle
    scanf("%d %d", &number, &position);

    // Toggle the nth bit and print the updated number
    printf("%d\n", toggleNthBit(number, position));

    return 0;
}