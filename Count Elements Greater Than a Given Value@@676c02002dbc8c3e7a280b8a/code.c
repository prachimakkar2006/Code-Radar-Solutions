#include<stdio.h>
int main(){
    int N,k;
    scanf("%d %d",&N,&k);
    int arr[N];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count+=1;
            printf("%d",count);
           
        }
    }
}