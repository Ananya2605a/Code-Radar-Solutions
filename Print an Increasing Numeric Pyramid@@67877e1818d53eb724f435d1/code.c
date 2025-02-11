#include <stdio.h>

int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        for(c=N;c>=a+1;c--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
}