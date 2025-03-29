#include <stdio.h>
int main()
{
    int a,b,num=1,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",num);
            num++;

        }
        printf("\n");
    }
}