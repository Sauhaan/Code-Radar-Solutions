#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int leadingZero = 1; 

    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;

        if (bit == 1) {
            leadingZero = 0; 
        }

        if (!leadingZero || bit == 1) { 
            printf("%d", bit);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);
    printf("\n");

    return 0;
}