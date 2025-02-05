#include <stdio.h>

int toggleNthBit(int num, int n) {
    int mask = 1 << n;
    return num ^ mask;
}

int main() {
    int number, position;
    printf("%s\n", welcome());
    scanf("%d %d", &number, &position);
    printf("%d\n", toggleNthBit(number, position));
    return 0;
}