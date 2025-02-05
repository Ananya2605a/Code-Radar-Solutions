#include <stdio.h>

int main()
{
    int a,b,N;
    scanf("%c",&N);
    for(a='A';a<=N;a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
}