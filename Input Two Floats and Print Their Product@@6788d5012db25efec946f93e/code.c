#include <stdio.h>

int main() {
    float x,y;
    scanf("%f",&x);
    printf(".2%f\t",x);
    scanf("%f",&y);
    printf(".2%f",x);
    printf("Product: %f",x*y);
    
    return 0;
}