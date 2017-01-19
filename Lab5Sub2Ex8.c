#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char sir1[30],sir2[30];

printf("Introduceti sirul: \n");
gets(sir1);

strcpy(sir2,sir1);
strrev(sir2);

if(strcmp(sir1,sir2)==0)
    printf("Cuvantul este palindrom\n");
else
    printf("Cuvantul nu este palindrom\n");
}
