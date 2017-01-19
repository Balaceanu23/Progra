#include <stdio.h>
#include <math.h>
int main()
{
    int number1, number2;
    double square_root1, square_root2;

    printf("Number1: ");
    scanf("%i", &number1);
    printf("Number2: ");
    scanf("%i", &number2);

    square_root1= sqrt(number1);
    square_root2= sqrt(number2);

    printf("\nSquare root of number 1= %d", square_root1);
    printf("\nSquare root of number 2= %d", square_root2);

    return 0;

}
