#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}
int main() {
    int number, position;
    printf("%s\n", welcome());
    scanf("%d %d", &number, &position);
    int nthBit = getNthBit(number, position);
    printf("%d\n", nthBit);

    return 0;
}