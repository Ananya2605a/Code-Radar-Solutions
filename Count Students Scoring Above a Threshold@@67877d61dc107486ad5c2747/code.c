#include <stdio.h>

struct ad
{
    int r;
    char n[20];
    float m;
};
int main()
{
    int N,a,num;
    float t;
    scanf("%d",&N);
    struct ad e[20];
    for(a=0;a<N;a++)
    {
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%f",&e[a].m);
    }
    scanf("%f",&t);
    for(a=0;a<N;a++)
    {
        if(e[a].m>t)
        num++;
    }

    printf("Count of student scoring above %.2f: %.2f",t,num);
    return 0;
}