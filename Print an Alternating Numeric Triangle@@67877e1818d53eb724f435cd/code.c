#include <stdio.h>
int main()
{
    int a,b,value,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        value=(a%2==0) ? 0:1;
        for(b=1;b<=a;b++)
        {
            printf("%d ",value);
            value=1-value
        }
        printf("\n");
        
    }
}