#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0]>arr[1]||arr[0]>arr[2]){
            printf("%d",arr[0]);
        }
        else if(arr[1]>arr[2]){
            printf("%d",arr[1]);
        }
        else if(arr[2]>arr[1]){
            printf("%d",arr[2]);
        }
        else{
            printf("-1");
        }
    }
}