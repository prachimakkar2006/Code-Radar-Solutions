#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort (Fixed)
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Finding minimum difference
    int min_diff = INT_MAX; // Initialize with a large value
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    printf("%d %d", arr[i],arr[i-1]);
    return 0;
}
