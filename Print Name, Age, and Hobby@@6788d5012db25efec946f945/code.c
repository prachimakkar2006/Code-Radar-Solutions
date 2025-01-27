#include <stdio.h>

int main() {
    char Name[] ;
    int Age;
    char Hobby[];
    scanf("%s %s %d ", &Name ,&Hobby, &Age);
    printf("Name: %s" ,Name);
    printf("Age: %d",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}