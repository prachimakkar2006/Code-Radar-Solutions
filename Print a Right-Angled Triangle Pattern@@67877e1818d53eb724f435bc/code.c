#include <stdio.h>
int main() {
    int i,j,n;
    n=1;
    scanf("%d",&i);
    for(i=0;i<n;i++){
        for(j=0;j<n,j++){
            printf("*",j);
        }
        printf("\n",i);
    }
    return 0;
}