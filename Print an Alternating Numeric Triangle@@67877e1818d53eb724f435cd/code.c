#include <stdio.h>
int main()
{
    int n,num=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num=!num;
        }
        printf("\n");
    }
}