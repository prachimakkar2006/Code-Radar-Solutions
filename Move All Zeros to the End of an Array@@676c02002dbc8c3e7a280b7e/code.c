#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=arr[n];
            printf("%d",arr[i]);
        }
        
       
        }
       
    }