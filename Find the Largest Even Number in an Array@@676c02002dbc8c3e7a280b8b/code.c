#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int num=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>num){
            num=arr[i];
            if(arr[i]%2==0){
                printf("%d",arr[i]);
                break;
            }
        }

       
        
    }
}