#include <stdio.h>



int main() {
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    int sum= x+y+z;
    int final =sum/3;
    printf("Average: %d",sum);
    return 0;
}