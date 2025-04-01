#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max_freq=0,max_ele=-1;
    int  found;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        if(count>max_freq){
            max_freq=count;
            max_ele=arr[i];
            found=1;
        }
    }
    if(count>=n/2){
        printf("%d",max_ele);
    }
    else{
        printf("-1");
    }
   
    
    return 0;
}