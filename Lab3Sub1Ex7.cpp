#include <stdio.h>

int input;

int main()
{
    do {

        printf("Insert number: ");scanf("%d ", &input);
        if (input < 0 || input > 90)
        printf("Please enter a number between [0 - 90]");

    }while (input < 0 && input >0 90);

    return 0;
}
