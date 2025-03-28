#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int found;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                found=arr[i];
                count+=1;
                
            }
        }
        printf("%d",count);
        break;
       
    }
    if(!count){
        printf("-1");
    }
}