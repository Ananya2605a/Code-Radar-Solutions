#include <stdio.h>
#include<string.h>

struct ad
{
    int r;
    char n[20];
    float m;
};
int main()
{
     int N,a;
    scanf("%d",&N);
    struct ad e[20];
    struct ad lowest;
    lowest.m= 100;
    lowest.r= 1;
    strcpy(lowest.n,"bob");

        for(a=1;a<=N;a++)
        {
            scanf("%d",&e[a].r);
            scanf("%s",e[a].n);
            scanf("%f",&e[a].m);
            
        }
        for(a=1;a<=N;a++)
        {
            if(e[a].m<lowest.m)
            {
                lowest.m=e[a].m;
                lowest.r=e[a].r;
                strcpy(lowest.n,e[a].n);
                
            }
        }
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",lowest.r,lowest.n,lowest.m);
            return 0;
    }

