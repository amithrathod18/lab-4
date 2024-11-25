#include <stdio.h>
int main(){
    int n,i,j,s; 
    printf("enter number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(s=0;s<=n-i-1;s++){
            printf(" ");
        }
        for (j=0;j<=2*i;j++){
            (j%2==0);
            printf(" %d ",i+1);
        }
        printf("\n");
    }
return 0;
}
