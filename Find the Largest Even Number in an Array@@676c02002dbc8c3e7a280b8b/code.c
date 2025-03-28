#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int num;
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max%2==0){
            arr[i]=max;
            printf("%d",arr[i]);
        }
        
    }
}