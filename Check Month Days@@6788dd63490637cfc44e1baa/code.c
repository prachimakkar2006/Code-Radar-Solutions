#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x==2){
        printf("%d",28);
    }
    else if(x%2!=0||x==8){
        printf("%d",31);
    }
    else{
        printf("%d",31);
    }
    return 0;
}