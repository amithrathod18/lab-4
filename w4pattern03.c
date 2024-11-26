#include<stdio.h>
int main(){
	int i,n,j,s;
	printf("enter number");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for (s=0;s<n-i-1;s++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
