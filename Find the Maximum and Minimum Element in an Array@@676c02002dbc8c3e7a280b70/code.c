#include<stdio.h>
int n;
scanf("%d",&n);
int arr[n];
int num=0;
int num2=0;
for(int i=0;i<=n-1;i++){
    if(arr[i]>num){
        num=arr[i];
    }
for(int i=0;i<=n-1;i++){
    if(arr[i<num2]){
        num2=arr[i];
    }
}
printf("%d %d",num,num2);
    return 0;

}
