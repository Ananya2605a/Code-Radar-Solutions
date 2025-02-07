#include <stdio.h>

struct Day
{
    char d[20];
    char n[20];
    int t;
};
int main()
{
    int a;
    float avg=0;
    struct Day e[20];
    for(a=0;a<7;a++)
    {
        scanf("%s",e[a].d);
        scanf("%s",e[a].n);
        scanf("%d",&e[a].t);
    }
    for(a=0;a<7;a++)
    {
        avg+=e[a].t;
    }
    avg=avg/7;
    printf("Average Temperature: %f\n",avg);
    return 0;
}