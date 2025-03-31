#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        int var=i-1;
        for(int k=1;k<=i-1;k++){
            printf("%d",var);
            var--;
        }

        printf("\n");
    }
}

