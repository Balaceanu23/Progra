#include<stdio.h>
#include<malloc.h>

struct Node {
int data;
struct Node* next;
}Node;

struct Node* p = NULL;

int sum(struct Node* prim, int n)
{
    int sum=0,i;
    struct Node* p = prim;

    for(i=0;i<n;i++)
    {
        sum = sum + p->data;
        p = p->next;
    }

    return sum;
}

int main()
{
    int i,x,n,nr;

    scanf("%d",&n);

    struct Node* prim = NULL;
    struct Node* ultim = NULL;
    struct Node* newElement = NULL;

    prim = malloc(sizeof(struct Node));
    ultim = malloc(sizeof(struct Node));

    ultim = prim;

    for(i=1;i<n;i++)
    {
        newElement = malloc(sizeof(struct Node));
        ultim->next = newElement;
        newElement->next = NULL;
        ultim = newElement;
    }

    p = prim;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        p->data = x;
        p = p->next;
    }

    nr = sum(prim,n);
    printf("The sum of the values is : %d \n",nr);

return 0;
}
