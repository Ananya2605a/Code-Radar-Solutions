#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=c;a>=1;a--)
    {
        for(b=1;b<=c;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}