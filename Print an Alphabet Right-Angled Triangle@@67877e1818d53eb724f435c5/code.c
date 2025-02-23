#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=;i<=n;i++){
        for(int j='A';j<='Z';j++){
            printf("%C",j);
        }
        printf("\n");
    }
}