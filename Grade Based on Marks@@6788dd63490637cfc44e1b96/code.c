#include <stdio.h>

int main() {
    int marks;

    scanf("%d", &marks);

    char grade;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%c\n", grade);

    return 0;
}