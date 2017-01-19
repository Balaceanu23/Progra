#include <stdio.h>

void SWAP(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int x,y;

int main()
{
    printf("Values of x and y\n");
    scanf("%d%d", &x, &y);
    SWAP(x,y);
    printf("After Swapping\nx = %d\ny = %d\n",x,y);

    return 0;
}
