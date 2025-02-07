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
          printf("Roll Number: %d, Name: %s, Marks: %f\n",e[a].r,e[a].n,e[a].m);
    }
    return 0;
}
