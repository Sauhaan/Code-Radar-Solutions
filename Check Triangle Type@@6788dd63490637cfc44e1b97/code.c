#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid input: Sides must be positive and satisfy the triangle inequality.\n");
        return 1; 
    }

    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0; 
}