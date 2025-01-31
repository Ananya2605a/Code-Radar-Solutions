#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=1<<(b-1);
    printf("%d",c);
}