#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||uppercase(x))
    {
        printf("Vowel")
        }
    else if(x>='b'&& x<='z'&&x>='B'&&Y<='Z'){
        printf("Consonant");
    }
    else if(x>int(0)&&x<=int(9)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    }
    return 0;
}