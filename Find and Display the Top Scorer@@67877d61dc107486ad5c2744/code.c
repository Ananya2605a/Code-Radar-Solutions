#include <stdio.h>

struct ad
{
    int r;
    char n[20];
    float m;
};
main()
{
     int N,a;
    scanf("%d",&N);
    struct ad e[20];
    struct ad highest;
    highest.m=-1
        for(a=1;a<=N;a++)
        {
            scanf("%d",&e[a].r);
            scanf("%s",e[a].n);
            scanf("%f",&e[a].m);
            
        }
        for(a=1;a<=N;a++)
        {
            if(e[a].m>highest.m)
            {
                highest.m=e[a].m;
            }
        }
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",highest.r,highest.n,highest.m);

    }
    return 0;
}