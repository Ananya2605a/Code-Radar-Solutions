#include <stdio.h>
int main()
{
int a,c,N;
scanf("%d",&N)
for(a=1;a<=N;a++)
{
    for(c=N;c>=a;c--)
    {
        printf(" ");
    }
    for(c=1;c<=a;c++)
    {
        printf("%d",c);
    }
    for(c=N-1;c>=a;c--)
    {
        printf("%d",c);
    }
    printf("\n");
}
return 0;
}