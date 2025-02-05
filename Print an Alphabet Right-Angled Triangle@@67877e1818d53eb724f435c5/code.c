#include <stdio.h>

int main()
{
    int a,b,N;
    scanf("%d",&N);
    for(a=0;a<=N;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("%c \n",'A'+b);
        }
        // printf("\n");
    }
}