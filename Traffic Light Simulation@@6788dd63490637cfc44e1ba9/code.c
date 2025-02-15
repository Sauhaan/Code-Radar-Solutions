#include<stdio.h>
int main(){
	char c;
	
	scanf("%c ",&c);
	switch(c){
		case 'R':
			printf("stop");
			break;
		case 'G':
			printf("Go");
			break;
		case 'Y':
			printf("slow down");
			break;
        default:
        printf("Invalid input");
    }
}