#include <stdio.h>

 struct ad
    {
        int r[20];
        char n[20];
        int m[10];
    };
main()
{
    int N,a;
    struct ad e[20];
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        scanf("%d",&e.r);
        scanf("%s",e.n);
        scanf("%d",&e.m);
        printf("Roll Number: %d, Name: %s,Marks: %d",e.r,e.n,e,m);
    }
    return 0;
}