#include <stdio.h>

int main() {
    int n, m, nthbit;
    scanf("%d %d", &n, &m);
    
    nthbit = (n >> m) & 1; 
    
    printf("%d", nthbit);
    
    return 0;
}

