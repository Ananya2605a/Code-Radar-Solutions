#include <stdio.h>

struct Book
{
    char t[30];
    char a[30];
    float p;
};
int main()
{
    int N,b,c;
    scanf("%d",&N);
    struct Book e[20];
    for(b=1;b<=N;b++)
    {
        scanf("%s",e[b].t);
        scanf("%s",e[b].a);
        scanf("%f",&e[b].p);
    }
    scanf("%d",&c);
    for(b=1;b<=N;b++)
    {
        if(e[b].p>c)
        {
            printf("Title: %s, Author: %s, Price: %.2f\n",e[b].t,e[b].a,e[b].p);
        }
    }
    return 0;

}