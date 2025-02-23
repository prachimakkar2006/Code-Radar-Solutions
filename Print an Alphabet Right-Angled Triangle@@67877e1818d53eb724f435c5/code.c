#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=;i<=n;i++){
        for(char j='A';j<='Z';j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}