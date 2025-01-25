#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    for(a=1;a<=d;a++)
    {
        for(c=d;c>=a;a--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
}