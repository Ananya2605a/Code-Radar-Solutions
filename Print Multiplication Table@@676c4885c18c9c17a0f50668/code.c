#include <stdio.h>

int main()
{
    int a,n,c,d;
    scanf("%d",&n);
    for(a=1;a<=10;a++)
    {
        c=a*n;
        printf("%d x %d = %d",n,a,c);
    }
}