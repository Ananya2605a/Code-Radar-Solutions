#include <stdio.h>

int main()
{
    char a;
    //int a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    printf("Vowel");
    /*else if(a>=0 || a<=9)
    printf("Digit");
    else*/
    else
    printf("Consonant");
}