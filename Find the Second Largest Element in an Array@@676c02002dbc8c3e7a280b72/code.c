#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("-1");
        return 0;
    }
    int sorted=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                sorted+=1;
            }
        }
    }
    if(sorted>0){
        printf("%d",arr[n-2]);
    }
    else{
        printf("-1");
    }
    
    return 0;
    
}