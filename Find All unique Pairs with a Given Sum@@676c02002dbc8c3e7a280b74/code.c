#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    int found;
    scanf("%d",&target);
    int printd=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                if(printd==0){
                     printf("%d %d\n",arr[i],arr[j]);
                     printd=1;

                }
            }
        }
        
    }
}