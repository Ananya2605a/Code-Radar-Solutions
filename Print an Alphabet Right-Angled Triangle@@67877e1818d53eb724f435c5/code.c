#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%c",&c);
    for(a='A';a<='E';a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c ",b);
        }
        printf("\n");
    }
}