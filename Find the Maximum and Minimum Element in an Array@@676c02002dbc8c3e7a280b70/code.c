#include<stdio.h>
int main({
    int n;
    scanf("%d",&n);
    int arr[n];
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]>num){
            num=arr[i];
        }
    }
    printf("%d",num);
    return 0;
})