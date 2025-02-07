#include <stdio.h>

int main()
{
    struct ad
    {
        int r[20];
        char n[20];
        int m[10];
        int N,a;
    }
    struct ad e;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        scanf("%d",&e.r);
        scanf("%s",e.n);
        scanf("%d",&e.m);
        printf("Roll Number: %d, Name: %s,Marks: %d",e.r,e.n,e,m);
    }
}