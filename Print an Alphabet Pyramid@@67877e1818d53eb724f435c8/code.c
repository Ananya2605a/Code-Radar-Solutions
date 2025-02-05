#include <stdio.h>

int main()
{
    char a,b,N;
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