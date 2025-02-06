#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=(b>1)?1:0;
    if(a & c)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}