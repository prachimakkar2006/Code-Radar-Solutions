#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
                int num=arr[0];
                if(arr[j]>num){
                    num=arr[j];
                }
            }

        }
        printf("%d ",num);
    }
}