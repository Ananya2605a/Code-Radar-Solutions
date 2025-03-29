#include <stdio.h>
int main()
{
    int a,b,c,num=1;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}