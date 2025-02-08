#include <stdio.h>

int main()
{
    int number, n, result;
    scanf("%d %d", &number, &n);
    
    // Create a mask with all bits set to 1 except the nth bit
    int mask = ~(1 << n);
    
    // Clear the nth bit using bitwise AND with the mask
    result = number & mask;
    
    printf("%d", result);
    return 0;
}
