#include <stdio.h>

int main() {
    int a, b, d;
    scanf("%d", &d);

    for(a = 1; a <= d; a++) {
        for(b = 1; b <= 2 * a - 1; b++) {
            printf("*");
        }
        printf("\n");
    }

  
    for(a = d - 1; a >= 1; a--) {
        for(b = 1; b <= 2 * a - 1; b++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
