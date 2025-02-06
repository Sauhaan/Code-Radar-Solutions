#include <stdio.h>
#include <stdint.h>
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0"); 
        return;
    }

    for (int i = 31; i >= 0; i--) { 
        int bit = (n >> i) & 1; 
        printf("%d", bit);
    }
    printf("\n"); 
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}