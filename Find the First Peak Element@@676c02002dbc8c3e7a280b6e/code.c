#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int found=0;
    for(int i=1;i<n-1;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if((arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            found+=1;
            break;
        }
    }
    if(arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
    }
    if(!found){
        printf("-1");
    }
    
    }
