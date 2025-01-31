#include <stdio.h>

int main()
{
    int n,m,b;
    scanf("%d",&n);
    b=sizeof(int)*8;
    m=1<<(b-1);
    if(n&m)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set")
    }
}