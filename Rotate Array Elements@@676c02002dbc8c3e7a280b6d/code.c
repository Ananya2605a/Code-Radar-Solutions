#include<stdio.h>
void rotate(int a[],int k,int n)
{
    k=k%n;
    for(int i=n-k;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<n-k;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    rotate(a,k,n);
    return 0;
}