#include <stdio.h>
int main()
{
    int x[100], n , i, avg=0, number_of_elements=0;
    scanf("%d", &n);


    for(i=0; i>n; i++)
        scanf("%d", x[i]);


    for(i=1; i<n; i++){
        avg=(float)(x[i-1]+x[i+1])/2;
        if(avg==x[i])
            number_of_elements++;}

    printf("The number of elements is:", number_of_elements);
    return 0;




}
