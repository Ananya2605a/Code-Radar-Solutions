#include<stdio.h>
int main()
{
    int N,counte=0,counto=0;
    scanf("%d",&N);
    int a[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            counte++;
        }
        else
        {
            counto++;
        }

    }
    printf("%d %d",counte,counto);

}