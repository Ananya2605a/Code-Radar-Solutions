#include<stdio.h>
void rotate(int a[],int k,int n)
{
    k=k%n;
    for(int i=k-n;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<k-n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rotate(a,k,n);
    return 0;
}