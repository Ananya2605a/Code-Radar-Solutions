#include <stdio.h>
int main()
{
    int n,num=1,i,j,value;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        value = (i%2==0) ? 0:1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",value);
            value = 1- value;
        }
        printf("\n");
    }
}