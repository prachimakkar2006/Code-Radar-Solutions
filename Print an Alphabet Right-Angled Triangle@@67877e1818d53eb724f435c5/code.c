#include<stdio.h>
int main(){
    int n;
    char ch='A'
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ch=ch+1;
            printf("%c",ch);
            
        }
        printf("\n");
    }
    return 0;
}