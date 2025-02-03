#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x%x==0 && x>1 && x%2==1 ){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }


    return 0;
}