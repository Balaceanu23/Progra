#include <stdio.h>
#include <string.h>
int main()
{
    char nume[20], prenume[20];
    printf("Nume: ");
    gets(nume);
    printf("Prenume: ");
    gets(prenume);

    printf("Nume cu caractere mari \n%s", strupr(nume));
    printf("Nume cu caractere mici \n%s", strlwr(nume));
    printf("Prenume cu caractere mari \n%s", strupr(prenume));
    printf("Prenume cu caractere mici \n%s", strlwr(nume));

    return 0;


}
