/*#include <stdio.h>

struct Vehicle
{
    char n[20];
    char t[20];
    int a;
};
int main()
{
    int a,N;
    float Cars=0,Trucks=0,Bikes=0;
    scanf("%d",&N);
    struct Vehicle e[20];
    for(a=0;a<N;a++)
    {
        scanf("%s",e[a].n);
        scanf("%s",e[a].t);
        scanf("%d",&e[a].a);
    }
    for(a=0;a<N;a++)
    {
       if(strcmp(e[a].t,"Car")==0)
       {
       Cars+=e[a].a;
       }
       else if(strcmp(e[a].t,"Truck")==0)
       {
       Trucks+=e[a].a;
       }
       else 
       {
       Bikes+=e[a].a;
       }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",Cars,Trucks,Bikes);
    return 0;
}*/
#include <stdio.h>
#include <string.h> // Include string.h for strcmp function

struct Vehicle {
    char n[20];
    char t[20];
    int a;
};

int main() {
    int a, N;
    float Cars = 0, Trucks = 0, Bikes = 0;
    struct Vehicle e[20];

    scanf("%d", &N);
    for (a = 0; a < N; a++) {
        scanf("%s", e[a].n);
        scanf("%s", e[a].t);
        scanf("%d", &e[a].a);
    }

    for (a = 0; a < N; a++) {
        if (strcmp(e[a].t, "Car") == 0) {
            Cars += e[a].a;
        } else if (strcmp(e[a].t, "Truck") == 0) {
            Trucks += e[a].a;
        } else {
            Bikes += e[a].a;
        }
    }

    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", Cars, Trucks, Bikes);
    return 0;
}
