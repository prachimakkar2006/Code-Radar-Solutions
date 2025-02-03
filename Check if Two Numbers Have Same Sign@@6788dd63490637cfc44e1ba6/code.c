#include <stdio.h>
int main() {
   int x,y;
   scanf("%d %d",&x,&y);
   int out;
   out=x*y;
   if(out>0){
    printf("Same Sign");
   }
   else{
    printf("Different Sign");
   }
   return 0;
}