#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=N;a>=1;a--)
    {
        for(c=1;c<=a;c++)
        {
            printf(" ");
        }
        for(b=N;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}