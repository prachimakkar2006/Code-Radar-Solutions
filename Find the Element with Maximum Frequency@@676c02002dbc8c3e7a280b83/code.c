#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_fre=0,max_ele;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        int count;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
            
        }
        if(count>max_fre){
                max_fre=count;
                max_ele=arr[i];
        }
    }
    printf("%d",max_ele);

}