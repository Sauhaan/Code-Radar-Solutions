#include<stdio.h>
int main(){
	int n,i,j,k,l;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for(j=1;j<n-i;j++){
			printf("  ");
		}
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(l=i-1;l>=1;l--){
            printf("*");
        }printf("\n");
	}
	return 0;
}