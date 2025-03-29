#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int found=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("-1");
        return 0;
    }
    int slargest=-1;
    int sorted=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<arr[j+1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
            }
    }
    printf("%d",arr[2]);
   }
