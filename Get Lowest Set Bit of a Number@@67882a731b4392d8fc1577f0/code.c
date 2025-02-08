#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int position = 0;  // Position starts from 0
    while ((number & 1) == 0 && number != 0) {
        number >>= 1;
        position++;
    }

    if (number == 0) {
        printf("The number has no set bits.\n");
    } else {
        printf("The position of the lowest set bit is: %d\n", position);
    }

    return 0;
}
