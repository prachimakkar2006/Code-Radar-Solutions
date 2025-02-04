#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int i,n;
    i=0;
    do(){
        i++;
        printf("%d",2**i);
    }while(i<n);
    return 0;
}