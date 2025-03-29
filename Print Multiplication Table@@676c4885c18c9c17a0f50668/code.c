#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        int c=a*b;
        printf("%d x %d = %d\n",b,a,c);
    }
}