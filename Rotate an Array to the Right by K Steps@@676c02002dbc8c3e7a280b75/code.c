#include <stdio.h>

int main() {

    scanf("%d", &n);
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    scanf("%d", &k);

    // Handle cases where k is greater than n
    k = k % n;

    // Rotate the array to the right by k positions
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1]; // Store the last element
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; // Shift elements to the right
        }
        arr[0] = temp; // Move the last element to the first position
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
