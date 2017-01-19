#include <stdio.h>
int main()
{
    int x[100], n, i, OK=1, ratio;
    printf("n=");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &x[i]);

    for(i=0; i<n; i++)
    if(x[i]==(x[i-1]+x[i+1])/2)
        ratio=x[i+1]-x[i];

    else
        {OK=0;
        break;}


    if(OK)
        printf("The ratio is:", ratio);

    return 0;
}
