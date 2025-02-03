#include <stdio.h>
int main() {
    char x,y,z,a,c;
    scanf("%c",&x);
    scanf("%c",&y);
    scanf("%c",&z);
    scanf("%c",&a);
    scanf("%c",&c);

    if(x=="A"){
        printf("Excellent");
    }
    else if (y=="B"){
        printf("Good");
    }
    else if(z=="C"){
        printf("Average");
    }
    else if(a=="D"){
        printf("Below Average"); 
    }
    else if(c=="F"){
        printf("Fail");
    }
    else{
        printf("Invalid Grade");
    }
    return 0;
}