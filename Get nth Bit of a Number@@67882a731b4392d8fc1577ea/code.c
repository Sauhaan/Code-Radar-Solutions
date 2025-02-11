#include <stdio.h>

int main() {
    int n, m, nthbit;
    scanf("%d %d", &n, &m);
    
    nthbit = 1&(n >> m) ; 
    
    printf("%d", nthbit);
    
    return 0;
}

