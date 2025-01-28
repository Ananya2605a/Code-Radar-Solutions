#include <stdio.h>

int main()
{
    int n,lsb;
    scanf("%d",&n);
    lsb=n&1;
    if(lsb==1)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}