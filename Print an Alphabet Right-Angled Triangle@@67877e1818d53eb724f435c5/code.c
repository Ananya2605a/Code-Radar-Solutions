#include <stdio.h>

int main()
{
    int a,b,d;
    scanf("%c",&d);
    for(a='A';a<=d;a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}