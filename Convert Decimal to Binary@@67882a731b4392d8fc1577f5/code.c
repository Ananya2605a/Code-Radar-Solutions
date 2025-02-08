#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Handle the case when the number is 0
    if (number == 0) {
        printf("0\n");
        return 0;
    }

    // Store the number to determine how many bits are needed
    int original_number = number;

    // Find the highest bit position that needs to be printed
    int highest_bit = 0;
    while (number >> highest_bit) {
        highest_bit++;
    }

  
    // Print the binary representation from the highest bit position to 0
    for (int i = highest_bit - 1; i >= 0; i--) {
        int bit = (original_number >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

