#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
 int N,a;
 float area,perimeter;
 scanf("%d",&N); 
 struct Rectangle e[20];
 for(a=1;a<=N;a++)
 {
    scanf("%d",&e[a].length);
    scanf("%d",&e[a].breadth);
 }
 for(a=1;a<=N;a++)
 {
    area=e[a].length*e[a].breadth;
    perimeter=2*(e[a].length+e[a].breadth);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",a,area,perimeter);
 }
 return 0;
 
}

