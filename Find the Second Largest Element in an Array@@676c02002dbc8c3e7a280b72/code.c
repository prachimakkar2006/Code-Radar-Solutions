#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int num=arr[0];\
    int max=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    for(int i=0;i<n;i++){
        if((arr[i]>num)&&(num!=max)){
            num=arr[i];
        }
    }
    printf("%d",num);

    }
    

}