#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",&str);
    char str2[100];
    scanf("%s",&str2);
    char str3[100];
    str3=strcat(str,str2);
    printf("%s",str3);
    return 0;

}