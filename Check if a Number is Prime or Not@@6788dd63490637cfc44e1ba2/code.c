#include <stdio.h>

int main()
{
int a,c,b=0;
scanf("%d",&c);
for(a=1;a<=c;a++)
{
    if (c%a==0)
    b++;
}
if(b>2)
printf("Not Prime");
else if(c==0 || c==1)
printf("Not Prime");
else
printf("Prime");
}

