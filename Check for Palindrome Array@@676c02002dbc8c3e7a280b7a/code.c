#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(n%2!=0){
            if(arr[n+1/2]-1 ==arr[n+1/2]+1){
                printf("YES");
            }
            
        }
    }
}