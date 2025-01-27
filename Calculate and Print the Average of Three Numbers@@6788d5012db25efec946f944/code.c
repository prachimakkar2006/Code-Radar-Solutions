#include <stdio.h>



int main() {
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    int sum= x+y+z;
    float out =sum/3;
    printf("Average: %.2f",out);
    return 0;
}