#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
        c=a*b;
        printf("%d x %d = %d",b,a,c);
    }
}