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
    int Cars,Trucks,Bikes;
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
       if(e[a].t==Car)
       Cars+=e[a].t;
       else if(e[a].t==Truck)
       Trucks+=e[a].t;
       else 
       Bikes+=e[a].t;
    }
    printf("Cars: %d, Trucks: %d, Bikes: %d",Cars,Trucks,Bikes);
    return 0;
}