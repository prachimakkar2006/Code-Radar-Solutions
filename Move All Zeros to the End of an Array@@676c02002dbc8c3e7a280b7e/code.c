#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print non-zero elements first
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        } else {
            zero_count++;
        }
    }

    // Print all zeros at the end
    for (int i = 0; i < zero_count; i++) {
        printf("0 ");
    }

    return 0;
}
