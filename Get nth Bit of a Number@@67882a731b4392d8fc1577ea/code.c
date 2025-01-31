#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=1<< (b-1);
    if(a & c)
    {
        printf(1);
    }
    else
    {
        printf(0);
    }
    return 0;
}