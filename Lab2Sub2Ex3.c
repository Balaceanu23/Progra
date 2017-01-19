#include <stdio.h>
#include <stdlib.h>

long i, min, max, a[100];

int number_of_elements;
int curent_element;

int main()
{
    printf("the number of elements is: ");

        scanf("%d", &number_of_elements);

    for(i=1;i<=number_of_elements;i++)
            scanf("%d",&curent_element);

        max=a[1];
        min=a[1];

    for(i=2;i<=number_of_elements;i++)
    {

        if(curent_element>max)
            max=curent_element;
        if(curent_element<min)
            min=curent_element;

    }

    printf(" the largest value is:%d", max);

    printf(" the smallest value is:%d", min);

    return 0;
}
