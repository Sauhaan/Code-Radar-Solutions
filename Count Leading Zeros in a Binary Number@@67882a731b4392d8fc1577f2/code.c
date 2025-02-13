#include <stdio.h>
#include <stdint.h> 

int countLeadingZeros(uint32_t n) {
    if (n == 0) {
        return 32; 
    }

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) { 
            break; 
        }
        count++;
    }
    return count;
}

int main() {
    uint32_t num;
    scanf("%u", &num); 
    printf("%d\n", countLeadingZeros(num));

    return 0;
}