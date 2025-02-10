#include <stdio.h>
int main() {
    int i,j,n;
    n=1;
    scanf("%d",&i);
    for(i=0;i<5;i++){
        for(j=0;j<5,j++){
            printf("*",j);
        }
        printf("\n",i);
    }
    return 0;
}