#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int found=0;
        for(int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                found=1;
            }
        }
    }
    if(found)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}