#include <stdio.h>
int main(){
    int n,i,j,s=1; 
    printf("enter number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for (j=0;j<i+1;j++){
             printf(" %d ",s);
             s++;
        }
        printf("\n");
    }
return 0;
}