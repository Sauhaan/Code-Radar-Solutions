#include <stdio.h>

int main() {
    char ch;
    int n;
    scanf("%d",&n);
        for (int i = 1; i <= n; i++) {
        for (ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); 
    }
    
    return 0;
}
