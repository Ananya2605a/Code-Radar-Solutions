#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=1<<(b-1);
    if(a & c)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}