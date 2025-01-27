#include <stdio.h>

int main() {
    float x,y;
    scanf("%f",&x);
    printf("%f.2\t",x);
    scanf("%f",&y);
    printf("%f.2",x);
    printf("Product: %f",x*y);
    
    return 0;
}