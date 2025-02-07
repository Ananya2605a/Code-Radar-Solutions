#include <stdio.h>

struct ad
{
    int r;
    char n[20];
    float m;
};
int main()
{
    int N,a
    float avg;
    scanf("%d",&N);
    struct ad e[20]
    for(a=1;a<=N;a++)
    {
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%f",&e[a].m);
    }
    for(a=1;a<=N;a++)
    {
        avg=e[a].m/N;
    }
    printf("Average Marks: %.2f",avg);
    return 0;
}