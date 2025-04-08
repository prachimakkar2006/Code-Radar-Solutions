#include <stdio.h>

int main() {
    int n, isPalindrome = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            isPalindrome = 1;
            break;
        }
    }

    if(isPalindrome>0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
