#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number of leading zeros is: 32\n");
        return 0;
    }

    int count = 0;
    int bit_mask = 1 << 31; // Mask with the most significant bit set (leftmost bit)

    while ((number & bit_mask) == 0) {
        count++;
        bit_mask >>= 1;
    }

    printf("The number of leading zeros is: %d\n", count);
    return 0;
}
