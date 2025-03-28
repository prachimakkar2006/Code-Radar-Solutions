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
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                found=arr[j];
                printf("%d",found);
                count+=1;
                break;
            }
        }
        if(count==1){
            break;
        }
        
    }
    if(!count){
        printf("-1");
    }
}