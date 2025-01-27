#include <stdio.h>



int main() {
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    int sum= x+y+z;
    int out =sum/3.0;
    printf("Average: %.2f",out);
    return 0;
}