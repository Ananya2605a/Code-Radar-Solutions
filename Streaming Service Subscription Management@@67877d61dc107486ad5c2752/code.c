#include <stdio.h>
#include<string.h>

struct Subscription
{
    char n[20];
    char t[20];
    int p;
};
int main()
{
    int a,N;
    int Standard=0,Premium=0,Basic=0;
    float revenue=0,revenue2=0,revenue=0;
    scanf("%d",&N);
    struct Subscription e[20];
    for(a=0;a<N;a++)
    {
        scanf("%s",e[a].n);
        scanf("%s",e[a].t);
        scanf("%d",&e[a].p);
    }
    for(a=0;a<N;a++)
    {
       if(strcmp(e[a].t,"Basic")==0)
       {
       Basic++;
       revenue+=e[a].p;
       }
       else if(strcmp(e[a].t,"Standard")==0)
       {
       Standard++;
       revenue2+=e[a].p;
       }
       else 
       {
       Premium++;
       revenue3+=e[a].p;
       }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users,\nRevenue: %.2f; Premium: %d Users, Revenue: %.2f",Basic,revenue,Standard,revenue2,Premium,revenue3);
    return 0;
}