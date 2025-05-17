#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);         // Step 1: Read size of array

    int arr[n];              // Step 2: Declare variable-length array

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Step 3: Read array elements
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];        // Step 4: Compute sum
    }

    printf("%d\n", sum);      // Step 5: Print sum
    return 0;
}
