#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int found=0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            found+=1;
            break;

        }
    }
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
        return 0;
    }
    else{ 
    printf("-1");
    }

    return 0;
}