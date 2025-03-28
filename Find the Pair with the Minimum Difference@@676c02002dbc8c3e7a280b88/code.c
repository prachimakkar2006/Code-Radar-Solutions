#include<stdio.h>
#include<limits.h>
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
    int min_diff=INT_MAX;

    for(int i=0;i<n;i++){
        int diff=arr[i+1]-arr[i];
        if(diff<min_diff){
            printf("%d %d",arr[i+1],arr[i]);
        }

        
        
    }
}
    
    
    