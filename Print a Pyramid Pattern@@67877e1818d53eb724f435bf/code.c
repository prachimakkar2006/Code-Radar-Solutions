#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n>1){
            printf(" ");
        } 
        for(int j=1;j<=2*i-1;j++){
            printf("*",j);
            
        }
        printf("\n");
    }



}