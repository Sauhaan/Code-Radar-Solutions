#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}
int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    printf("%d\n", getNthBit(number, position));
    return 0;
}