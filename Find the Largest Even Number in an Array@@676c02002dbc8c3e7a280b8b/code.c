#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int num = arr[0];
    int found = 0;

    for(int i = 0; i < n; i++){
        if((arr[i] % 2 == 0) && (arr[i] > arr[0])){
            if(!found || arr[i] > num){
                num = arr[i];
                found = 1;
            }
        }
    }

    if(found)
        printf("%d", num);
    else
        printf("-1");

    return 0;
}
