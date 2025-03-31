#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num=arr[0];
    for(int i=0;i<n;i++){
        if(num>arr[i]){
            num=arr[i];
            if(num%2==0){
                printf("%d",num);
            }
        }


    }
    

       
        
    }
