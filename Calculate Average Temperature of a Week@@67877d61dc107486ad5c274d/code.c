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
        scanf("%s %d",e[a].d,&e[a].t);
        scanf("%s",e[a].n);
    }
    for(a=0;a<7;a++)
    {
        avg+=e[a].t;
    }
    avg=avg/7.0;
    printf("Average Temperature: %.2f\n",avg);
    return 0;
}