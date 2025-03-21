#include<stdio.h>

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    
    int a[N], freq[N], i, j, count;
    
    // Input the elements of the array
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1; // Initialize the frequency array
    }
    
    // Calculate the frequency of each element
    for(i = 0; i < N; i++) {
        count = 1;
        for(j = i + 1; j < N; j++) {
            if(a[i] == a[j]) {
                count++;
                freq[j] = 0; // Mark this element as processed
            }
        }
        if(freq[i] != 0) {
            freq[i] = count; // Store frequency for unprocessed elements
        }
    }
    
    // Display the frequency of each element
    printf("Element\tFrequency\n");
    for(i = 0; i < N; i++) {
        if(freq[i] != 0) {
            printf("%d\t%d\n", a[i], freq[i]);
        }
    }
    
    return 0;
}