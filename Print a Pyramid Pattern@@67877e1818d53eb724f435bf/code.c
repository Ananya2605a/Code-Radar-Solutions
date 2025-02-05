#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    for(a=1;a<=d;a+=2)
    {
        for(c=d;c>=1;c--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}