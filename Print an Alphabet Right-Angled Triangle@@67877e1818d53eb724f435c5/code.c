#include <stdio.h>

int main()
{
    int a,b,N;
    scanf("%d",&N);
    for(a=1;a<=N+1;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("%c ", 'A'+b);
        }
        printf("\n");
    }
}