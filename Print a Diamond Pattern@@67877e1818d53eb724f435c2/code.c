#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    for(a=1;a<=d;a++)
    {
        for(c=d;c>=a+1;c--)
        {
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(a=d-1;a>=1;a--)
    {
        for(c=d;c>=a+1;c--)
        {
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
}