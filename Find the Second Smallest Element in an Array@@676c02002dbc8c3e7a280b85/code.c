#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num1=INT_MAX;
    int num=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]<num) && (num!=num1)){
            num=arr[i];
        }
    }
    printf("%d",num);
}