#include <stdio.h>
int main()
{
int a,b,c,N;
scanf("%d",&N)
for(a=1;a<=N;a++)
{
    for(c=N;c>=a;a--)
    {
        printf(" ");
    }
    for(c=1;c<=a;c++)
    {
        printf("%d",c);
    }
    for(c=N;c>=a;c--)
    {
        printf("%d",c);
    }
}
return 0;
}