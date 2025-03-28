#include<stdio.h>
int main(){
    int N,k;
    scanf("%d %d",&N,&k);
    int arr[N];
    int count=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]>k){
            count+=1;
        }
    
    }
    printf("%d",count);
}