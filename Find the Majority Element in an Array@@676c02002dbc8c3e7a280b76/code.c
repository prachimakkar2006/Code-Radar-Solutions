#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
                break;
            }
            else if(arr[i]!=arr[j]){
                printf("-1");
            }
        }
        printf("%d",arr[i]);
        break;
    }
}