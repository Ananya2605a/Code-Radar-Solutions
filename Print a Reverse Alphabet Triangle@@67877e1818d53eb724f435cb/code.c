#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=c;a>=1;a--)
    {
        for(b=0;b<a;b++)
        {
            printf("%c ",'A'+b);
        }
        printf("\n");
    }
}