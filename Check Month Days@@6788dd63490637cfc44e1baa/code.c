#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);

    if (x>12){
        printf("Invalid month");
    }
    else if(x%2!=0||x==8||x==12&&x>=1&&x<=12){
        printf("%d",31);
    }
    else if (x==2){
        printf("%d",28);
    }
    else{
        printf("%d",30);
    }
    return 0;
}