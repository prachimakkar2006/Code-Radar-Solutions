#include <stdio.h>



int main() {
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    int sum= x+y+z;
    float final =sum/3;
    printf("Average: %f",final);
    return 0;
}