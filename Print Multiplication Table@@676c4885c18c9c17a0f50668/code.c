#include <stdio.h>

int main()
{
    int a,N,c;
    scanf("%d",&N);
    for(a=1;a<=10;a++)
    {
        c=a*N;
        printf("%d x %d = %d",N,a,c);
    }
}