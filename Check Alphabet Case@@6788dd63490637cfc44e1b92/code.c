#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if (x>=(int)'A' && x<=(int)'Z'){
        printf("Uppercase");
    }
    else if(x>=(int)'a'&& x<=(int)'z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }

    return 0;
}