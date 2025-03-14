#include<stdio.h>
int main()
{
    int n,a=0,b,c,i;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        return 0;
    }
}