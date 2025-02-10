#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int nthbit = (n >> m) & 1; 
    
    printf("%d", nthbit);
    
    return 0;
}

