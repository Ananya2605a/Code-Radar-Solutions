#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
        int c=a*b;
        printf("%d x %d = %d\n",b,a,c);
    }
}