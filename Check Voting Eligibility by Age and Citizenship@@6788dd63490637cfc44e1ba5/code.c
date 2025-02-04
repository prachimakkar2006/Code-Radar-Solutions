#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=18&&y==1){
        printf("Eligible");
    }
    else if(x<18||y==0||x==1){
        printf("Not Eligible");
    }
    return 0;
}