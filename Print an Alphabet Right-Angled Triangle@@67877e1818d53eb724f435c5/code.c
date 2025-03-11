#include <stdio.h>

int main() {
    char ch;
        for (int i = 1; i <= 2; i++) {
        for (ch = 'a'; ch < 'a' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n"); 
    }
    
    return 0;
}
