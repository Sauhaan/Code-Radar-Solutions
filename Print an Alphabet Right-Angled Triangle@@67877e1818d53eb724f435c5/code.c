#include <stdio.h>

int main() {
    char ch;
    int n;
    scanf("%d",&n);
        for (int i = 1; i <= n; i++) {
        for (ch = 'a'; ch < 'a' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n"); 
    }
    
    return 0;
}
