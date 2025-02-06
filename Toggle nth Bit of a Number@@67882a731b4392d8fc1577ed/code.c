#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d %d", &num, &n);

    // Toggle the nth bit using XOR operator
    num ^= (1 << n);

    // Output the updated number
    printf("%d\n", num);

    return 0;
}