#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int product=arr[0]*arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]*arr[j]>product){
            product=arr[i]*arr[j];
        }
    }
    printf("%d",product);
}