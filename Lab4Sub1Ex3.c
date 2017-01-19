#include <stdio.h>

int add(int a, int b, int c)
{
        return a + b + c;
}
int prod(int a, int b, int c)
{
    return a * b * c;
}
int avg(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}
int main()
{
        int a, b, c, sum, product, average;

        printf("A: ");
        scanf("%d", &a);

        printf("B: ");
        scanf("%d", &b);

        printf("C: ");
        scanf("%d", &c);

        sum = add(a, b, c);
        product=prod(a ,b ,c);
        average=avg(a, b, c);

        printf("The sum of %d and %d and %d is %d.\n", a, b, c, sum);
        printf("The product of %d and %d and %d is %d.\n", a, b, c, product);
        printf("The average of %d and %d and %d is %d.\n", a, b, c, average);



        return 0;
}


