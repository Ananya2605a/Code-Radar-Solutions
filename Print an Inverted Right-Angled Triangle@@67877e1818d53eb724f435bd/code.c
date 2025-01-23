#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=0;a<=c,a++)
    {
        for(b=c;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
}