#include<stdio.h>
int main()
{
    int N,counte=0,counto=0;
    int a[N];
    int i;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
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