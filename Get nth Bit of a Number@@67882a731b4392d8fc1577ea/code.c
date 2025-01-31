#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=1<<(b-1);
    if(a&c)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}