#include <stdio.h>

int a,b;
char opr;
scanf("%d %d",&a,&b);
scanf("%c",&opr);
switch(opr){
    case '+':
    printf("%d",a+b);
    break;
    case '-':
    printf("%d",a-b);
    break;
    case '*':
    printf("%d",a*b);
    break;
    case '/':
    printf("%d",a/b);
    break;
    default:
    printf("none");
}