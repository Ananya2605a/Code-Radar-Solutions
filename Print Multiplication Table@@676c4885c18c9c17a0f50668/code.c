#include <stdio.h>

int main()
{
    int a,n,c;
    scanf("%d",&n);
    for(a=1;a<=10;a++)
    {
        c=a*n;
        printf("%d x %d = %d",n,a,c);
    }
}