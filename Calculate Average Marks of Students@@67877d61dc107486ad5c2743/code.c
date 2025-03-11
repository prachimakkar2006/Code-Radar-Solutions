#include<stdio.h>
int main(){
    int n;
    int roll_num[10],marks[100];
    char name[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %s",&roll_num[i],&name[i],&marks[i]);
    }
    for(int i=1;i<=n;i++){
        printf("%d",roll_num);
        printf("%s",name);
        printf("%d",marks);
    }

    return 0;

}