#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=c;b<=a;b++)
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