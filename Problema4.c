#include <stdio.h>
int main()
{
    int numar1, numar2, sum, dif, prod , mod;
    float div;
    printf("Numar1: ");
    scanf("%i", &numar1);
    printf("Numar2: ");
    scanf("%i", &numar2);

    sum=numar1+numar2;
    dif=numar1-numar2;
    prod=numar1*numar2;
    mod=numar1%numar2;
    div=(float)numar1/numar2;

    printf("\nSuma = %d", sum);
    printf("\nDiferenta = %d", dif);
    printf("\nInmultire = %d", prod);
    printf("\nImpartire = %f", div);
    printf("\nProcent = %d", mod);

    return 0;
}
