#include <stdio.h>
int main()
{
    int n,i,OK=1;

    printf("Integer number:");
    scanf("%i", &n);

    for(i=2; i<n/2; i++)
        if(n%i==0){
            OK=0;
            break;
        }

    if(OK==1)
        printf("The number is prime");
    else
        printf("The number is not prime");

    return 0;

}
