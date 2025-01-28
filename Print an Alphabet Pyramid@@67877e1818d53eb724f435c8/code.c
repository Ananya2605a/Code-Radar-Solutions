#include <stdio.h>

int main()
{
    char a,b,d;
    scanf("%c",&d);
    for(a='A';a<=d;a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    
}