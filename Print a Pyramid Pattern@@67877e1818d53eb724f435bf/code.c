#include<stdio.h>
int main(){
	int n,i,j,k,l;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(l=1;l<i;l++){
            printf("*");
        }printf("\n");
	}
	return 0;
}