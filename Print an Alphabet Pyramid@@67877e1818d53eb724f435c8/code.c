#include <stdio.h>

int main()
{
    int a,b,N;
    scanf("%d",&N);
    for(a=65;a<=N;a++)
    {
        for(b=65;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    
}