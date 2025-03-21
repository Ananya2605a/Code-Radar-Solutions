#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    int a[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        count++;
        printf("%d %d",i,count);

    }

}
