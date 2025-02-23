#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=m;j>=i;j--){
            printf("* ",j);
        }
        printf("\n");
    }
}