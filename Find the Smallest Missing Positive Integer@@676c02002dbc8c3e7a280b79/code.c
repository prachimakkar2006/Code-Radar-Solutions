#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize `num` with arr[0] after input
    int num = arr[0];

    // Finding the smallest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < num) {
            num = arr[i];
        }
    }

    // Printing the smallest number + 1
    printf("%d", num + 1);

    return 0;
}
