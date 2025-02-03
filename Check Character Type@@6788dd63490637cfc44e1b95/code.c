#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E')
    {
        printf("Vowel");
        }
    else{
        printf("Special Character");
    }
    return 0;
}