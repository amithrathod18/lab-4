#include <stdio.h>
int main({
    int i,j,n,s=1;
    printf("enter number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}