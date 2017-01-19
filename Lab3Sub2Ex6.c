#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%i", &n);

    for(i=0; i<n; i++)
        sum=(int)(sum+ i*i);

    printf("The sum of the first n square numbers is:%d", sum);

    return 0;


}
