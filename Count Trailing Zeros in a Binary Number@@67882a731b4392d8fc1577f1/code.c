#include <stdio.h>
#include <stdint.h> 

int countTrailingZeros(uint32_t n) {
    if (n == 0) {
        return 32;
    }

    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1; 
        count++;
    }
    return count;
}
int main() {
    uint32_t num;
    scanf("%u", &num); 
    printf("%d\n", countTrailingZeros(num));

    return 0;
}