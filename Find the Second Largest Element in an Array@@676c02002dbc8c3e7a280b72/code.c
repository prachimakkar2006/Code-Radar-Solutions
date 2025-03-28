#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Taking input for the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   

    int first = arr[0], second = -1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {  
            second = first; 
            first = arr[i];  
        } else if (arr[i] > second && arr[i] != first) {  
            
            second = arr[i];
        }
    }
    printf("%d",second)

    // If no second largest is found, return -1
    // printf("%d", second == -1 ? -1 : second);
    
    return 0;
}