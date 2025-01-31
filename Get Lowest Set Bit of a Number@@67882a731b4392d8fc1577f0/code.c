#include <stdio.h>

int main()
{
    int a,b,p=1;
    scanf("%d",&a);
    b = a &-a;
    while(!(b&1)){
    b>>=1;
    p++;
    }
    printf("%d",b);
}