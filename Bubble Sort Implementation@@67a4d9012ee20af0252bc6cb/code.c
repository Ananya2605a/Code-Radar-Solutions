#include <stdio.h>

int a[50];
	int p,b,d,temp;
	//printf("ENTER THE LIMIT OF ARRAY : ");
	scanf("%d",&p);
	//printf("ENTER ELEMENTS OF ARRAY A : ");
	for(b=0;b<=p;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=0;b<=p;b++)
	{
		for(d=b+1;d<=p;d++)
		{
			if (a[d]<a[b])
			
			{
				temp=a[b];
				a[b]=a[d];
				a[d]=temp;
			}
		}
	}
	//printf("Sorted array in ascending order");
	for(b=0;b<=p;b++)
	{
	
		printf("%d \n",a[b]);
}