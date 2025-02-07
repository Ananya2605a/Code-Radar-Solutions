#include <stdio.h>

struct Vehicle
{
    char n[20];
    char t[20];
    int a;
};
int main()
{
    int a,N;
    int Cars=0,Trucks=0,Bikes=0;
    scanf("%d",&N);
    struct Vehicle e[20];
    for(a=0;a<N;a++)
    {
        scanf("%s",e[a].n);
        scanf("%s",e[a].t);
        scanf("%d",&e[a].a);
    }
    for(a=0;a<7;a++)
    {
       if(strcmp(e[a].t=="Car"))
       Cars+=e[a].a;
       else if(strcmp(e[a].t=="Truck"))
       Trucks+=e[a].a;
       else 
       Bikes+=e[a].a;
    }
    printf("Cars: %d, Trucks: %d, Bikes: %d",Cars,Trucks,Bikes);
    return 0;
}