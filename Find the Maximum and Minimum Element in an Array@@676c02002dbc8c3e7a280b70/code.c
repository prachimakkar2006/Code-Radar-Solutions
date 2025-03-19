#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int num=arr[0];
    int num2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>num){
            num=arr[i];
        }
    }
    return 0;
    
}
