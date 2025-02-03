#include <stdio.h>
int main() {
   int x;
   scanf("%d",&x);
   if((x%3==0) && (x%5==0)){
    printf("Divisible by Both");
   }
   else if (x%3==0){
    printf("Divisible by 3");
   }
   else i f(x%5==0){
    printf("Divisible by 5");
   }
   else{
    pritnf("Not Divisible");
   }

    return 0;
}