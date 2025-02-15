#include<stdio.h>
int main(){
	char c;
	
	scanf("%c ",&c);
	switch(c){
		case 'R':
			printf("Stop");
			break;
		case 'G':
			printf("Go");
			break;
		case 'Y':
			printf("Slow down");
			break;
        default:
        printf("Invalid input");
    }
}