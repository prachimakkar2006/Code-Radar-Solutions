#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x==2){
        printf("Prime");
    }
    else if(x==3){
        printf("Prime");
    }
    else if(x%x==0 && x>1 && x%2==1 && x%3!=0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }


    return 0;
}