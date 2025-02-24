#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m=1;
        for(int j=1;j<=i;j++){
            printf("%d ",m++);

        }
        printf("\n");
    }
}