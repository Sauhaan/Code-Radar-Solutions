#include<stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	switch(c){
		case '+':
			printf("%d %c %d",a+b);
			break;
		case '-':
			printf("%d %c %d",a-b);
			break;
		case '*':
			printf("%d %c %d",a*b);
			break;
		case '/':
			if((a==0) ||(b==0)){
				printf("error");
				break;
			}else{
			printf("%d %c %d",a/b);
			break;}
	}
}