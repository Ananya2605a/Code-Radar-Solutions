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
    struct ad highest;
    highest.m= -1;
    highest.r= -1;
    strcpy(highest.n,"bob");

        for(a=1;a<=N;a++)
        {
            scanf("%d",&e[a].r);
            scanf("%s",e[a].n);
            scanf("%f",&e[a].m);
            
        }
        for(i=0;i<N;i++)
        {
            highest.m=-1;
        }
        for(a=1;a<=N;a++)
        {
            if(e[a].m>highest.m)
            {
                highest.m=e[a].m;
                highest.r=e[a].r;
                strcpy(highest.n,e[a].n);
                maxIndex = a;
                
                
            }
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",highest.r,highest.n,highest.m);
            e[maxIndex].m = -1;
        }
        
            return 0;
    }

