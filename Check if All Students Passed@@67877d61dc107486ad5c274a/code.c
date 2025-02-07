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
    scanf("%d",&N);
    struct ad e[20];
    for(a=0;a<N;a++)
    {
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%f",&e[a].m);
    }
    for(a=0;a<N;a++)
    {
        if(e[a].m<=50)
        all_passed=0;
        break;
    }
    if(all_passed)
    {
        printf("All Passed\n");
    }
    else
    {
        printf("Not All Passed\n");
    }
    return 0;
}