#include <stdio.h>

struct Day
{
    char d[20];
    char n[20];
    float t;
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
        scanf("%f",&e[a].t);
    }
    for(a=0;a<7;a++)
    {
        avg+=e[a].t;
    }
    avg=avg/7;
    printf("Average Temperature: %.2f",avg);
    return 0;
}