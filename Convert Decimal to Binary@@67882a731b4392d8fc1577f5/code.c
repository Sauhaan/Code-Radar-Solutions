#include <stdio.h>

void decimalToBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1 || i < 31) {
            printf("%d", bit);
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   
    decimalToBinary(num);
    printf("\n");

    return 0;
}
