#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missing = 0; // Count of missing numbers
    int current = 1; // Start from the first positive integer
    int index = 0;   // Index for array traversal

    while (missing < k) {
        if (index < n && arr[index] == current) {
            // Current number is present in array, move to next
            index++;
        } else {
            // Current number is missing
            missing++;
            if (missing == k) {
                return current;
            }
        }
        current++;
    }
    return -1; // Should not reach here
}

