#include <stdio.h>

int main()
{
    for (int i = 2; i <= 60; i += 2)
        printf("%d\n" ,i);



    int i = 2;
    while (i <= 60) {
       printf("%d\n",i);
        i += 2;
    }



    i = 2;
    do {
        printf("%d\n",i);
        i += 2;
    }while (i <= 60);

    return 0;
}
