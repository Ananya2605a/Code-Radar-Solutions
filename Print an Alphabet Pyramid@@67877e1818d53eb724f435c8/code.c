#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("%c ",'A'+b);
        }
        printf("\n");
    }
}