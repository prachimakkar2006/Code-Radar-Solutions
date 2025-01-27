#include <stdio.h>



int main() {
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    int product= x*y*z;
    int final =product/3;
    printf("Average: %.2d",product);
    return 0;
}