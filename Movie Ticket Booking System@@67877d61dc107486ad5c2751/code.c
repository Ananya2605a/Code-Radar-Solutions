#include <stdio.h>
#include<string.h>

struct MovieTicket
{
    char n[20];
    char t[20];
    int p;
};
int main()
{
    int a,N;
    float Standard=0,Premium=0,VIP=0;
    scanf("%d",&N);
    struct MovieTicket e[20];
    for(a=0;a<N;a++)
    {
        scanf("%s",e[a].n);
        scanf("%s",e[a].t);
        scanf("%d",&e[a].p);
    }
    for(a=0;a<N;a++)
    {
       if(strcmp(e[a].t,"Standard")==0)
       {
       Standard+=e[a].a;
       }
       else if(strcmp(e[a].t,"Premium")==0)
       {
       Premium+=e[a].a;
       }
       else 
       {
       VIP+=e[a].a;
       }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",Standard,Premium,VIP);
    return 0;
}