#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int found;

    
    int min_diff = INT_MAX; 
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            found+=1;
        }
         printf("%d %d", arr[i-1],arr[i]);
         break;
    
    }
    if(!found){
        printf("-1");
    }

   
    return 0;
}
