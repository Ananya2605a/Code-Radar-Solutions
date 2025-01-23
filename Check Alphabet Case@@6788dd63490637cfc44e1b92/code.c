#include <stdio.h>

char alpha;
scanf("%c",&alpha);
if(alpha>='A' && alpha<='Z')
printf("Uppercase");
else if (alpha>='a' && aplha<='z')
printf("Lowercase");
else
printf("Not an alphabet");