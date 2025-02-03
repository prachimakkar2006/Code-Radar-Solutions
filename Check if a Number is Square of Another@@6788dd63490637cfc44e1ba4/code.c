#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int out;
    out=y*y;
    if(x==out){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}