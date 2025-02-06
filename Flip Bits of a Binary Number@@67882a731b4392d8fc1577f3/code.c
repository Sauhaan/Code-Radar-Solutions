#include <stdio.h>
#include <stdint.h> 

int main() {
    int num;
    scanf("%d", &num); 

    int flipped_num = ~num; 

    printf("%d\n", flipped_num); 

    return 0;
}