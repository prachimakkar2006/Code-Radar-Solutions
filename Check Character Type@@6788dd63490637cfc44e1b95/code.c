#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'){
        printf("Consonant");
    }
    else if(x>='0'&&x<='9'){
        printf("Digit");
    }
    else if (x>='b'&&x<='z' ||x>='B' && x<='Z'){
        printf("Consonant");
    }
    else{
        printf("Special Characeter");
    }
    return 0;
}