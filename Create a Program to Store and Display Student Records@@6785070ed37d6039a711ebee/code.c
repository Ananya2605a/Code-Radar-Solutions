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
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%d",&e[a].m);
    }
    for(a=1;a<=N,a++)
    {
          printf("Roll Number: %d, Name: %s,Marks: %d",e[a].r,e[a].n,e[a],m);
    }
    return 0;
}