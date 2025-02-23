#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            if(i==1||i==n&& j==1||j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
            for( int j=1;j<=n;j++){
                printf("*",j);
            
            
        }
        printf("\n");
    }
}
