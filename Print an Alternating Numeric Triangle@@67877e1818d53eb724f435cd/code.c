#include <stdio.h>
int main()
{
    int a,b,N;
    scanf("%d",&N);
    for(a=0;a<=N;a++)
    {
        for(b=a;b>=0;b--)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
}