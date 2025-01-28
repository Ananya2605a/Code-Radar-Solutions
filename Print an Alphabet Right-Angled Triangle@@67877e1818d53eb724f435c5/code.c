#include <stdio.h>

int main()
{
    int a,b,n;
    scanf("%c",&n);
    for(a='A';a<=n;a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}