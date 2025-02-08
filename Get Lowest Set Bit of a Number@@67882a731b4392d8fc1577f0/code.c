#include <stdio.h>

int main() {
    int number;
   
    scanf("%d", &number);

    int position = 0;  // Position starts from 0
    while ((number & 1) == 0 && number != 0) {
        number >>= 1;
        position++;
    }

    if (number == 0) {
        printf("The number has no set bits.\n");
    } else {
        printf("%d\n", position);
    }

    return 0;
}
