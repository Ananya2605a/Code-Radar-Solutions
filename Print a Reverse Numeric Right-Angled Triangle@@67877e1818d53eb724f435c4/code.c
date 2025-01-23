#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=c;b>=1;b--)
        {
            printf("%d",b)
        }
        printf("\n");
    }
}