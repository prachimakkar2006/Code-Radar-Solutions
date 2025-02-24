#include<stdio.h>
int main(){
    int n ,i ,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",1);
        }
        if(i%2==0 && j==n-1){
            printf(0);
        }
        else{
            printf(1);
        }
        printf("\n");
    }
}