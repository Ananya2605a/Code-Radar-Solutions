#include <stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&d);
	for(a=1;a<=d;a++)
	{
		for(b=a;b<d;b++)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(b=a-1;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
	
}