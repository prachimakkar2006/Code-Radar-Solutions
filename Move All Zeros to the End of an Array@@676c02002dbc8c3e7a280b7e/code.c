#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[n]=arr[i];  
        }
    printf("%d",arr[i]);
    }
    
}