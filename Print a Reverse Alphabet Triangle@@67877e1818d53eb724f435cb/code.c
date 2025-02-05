#include <stdio.h>

int main()
{
    char a,b,N;
    scanf("%c",&N);
    for(a=N; a>= 'A'; a--)
    {
        for(b='A'; b<=a; b++)
        {
            printf("%c ",'A'-b);
        }
        printf("\n");
    }
}