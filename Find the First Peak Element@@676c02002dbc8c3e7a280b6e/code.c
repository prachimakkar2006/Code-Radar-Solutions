#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int found=0;
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            found+=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
    
    }
