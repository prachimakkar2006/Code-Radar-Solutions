#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff=arr[0]-arr[1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]-arr[j]>diff){
                diff=arr[i]-arr[j];
                printf("%d %d ",arr[i],arr[j]);
            }
        }
    }
}