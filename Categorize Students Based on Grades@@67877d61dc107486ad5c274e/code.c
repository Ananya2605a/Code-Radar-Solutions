#include <stdio.h>

struct ad
    {
        int r;
        char n[20];
        float m;
    };
int main()
{
    int N,a;
    struct ad e[20];
    scanf("%d",&N);
    for(a=0;a<N;a++)
    {
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%f",&e[a].m);
    }
    for(a=0;a<N;a++)
    {
        if(e[a].m>=85)
        printf("Roll Number: %d, Name: %s, Grade: A",e[a].r,e[a].n);
        else if(e[a]>=70 && e[a]<=84)
        printf("Roll Number: %d, Name: %s, Grade: B",e[a].r,e[a].n);
        else 
        printf("Roll Number: %d, Name: %s, Grade: C",e[a].r,e[a].n);
    }
    return 0;
}
