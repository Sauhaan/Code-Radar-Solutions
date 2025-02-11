#include <stdio.h>

int main() {
    int num;
    int is_prime = 1; 
    scanf("%d", &num);
    if (num <= 1) {
        is_prime = 0; 
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; 
                break;       
            }
        }
    }
    if (is_prime == 1) {
        printf("prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}