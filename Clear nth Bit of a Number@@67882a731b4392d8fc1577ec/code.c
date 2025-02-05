#include <stdio.h>

int clearNthBit(int num, int n) {
    // Create a mask with nth bit set to 0 and all other bits set to 1
    int mask = ~(1 << (n - 1));
    // Clear the nth bit of the number
    num = num & mask;
    return num;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to clear (1-based index): ");
    scanf("%d", &n);

    int result = clearNthBit(num, n);

    printf("Number after clearing the %dth bit: %d\n", n, result);

    return 0;
}
