#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of rows must be positive.\n"); 
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}