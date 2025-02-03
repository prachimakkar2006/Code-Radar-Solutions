#include <stdio.h>
int main() {
    int x;
    x=x>=1 && x<=12;
    scanf("%d",&x);

    if (x==2 && x>=1 && x<=12){
        printf("%d",28);
    }
    else if(x%2!=0||x==8||x==12 ){
        printf("%d",31);
    }
    else if (x>12){
        printf("Invalid month");
    }
    else{
        printf("%d",30);
    }
    return 0;
}