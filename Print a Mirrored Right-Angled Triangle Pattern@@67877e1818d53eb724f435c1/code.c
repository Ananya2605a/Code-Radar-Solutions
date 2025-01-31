#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=N;a>=1;a--)
    {
        for(c=1;c<=a;a++)
        {
            printf(" ");
        }
        for(b=N;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
}