#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    char str2[100];
    scanf("%s", str);
    scanf("%s", str2);
    strcat(str, str2);
    printf("%s", str);

    return 0;
}
