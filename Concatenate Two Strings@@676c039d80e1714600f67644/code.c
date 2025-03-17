#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",&str);
    char str2[100];
    scanf("%s",&str2);
    strcat(str,str2);
    printf("%s",str);
    return 0;

}