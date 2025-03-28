#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    int diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]<diff){
            diff=arr[i+1]-arr[i];
            printf("%d %d",arr[i+1],arr[i]);
        }
    }
    
    }
    