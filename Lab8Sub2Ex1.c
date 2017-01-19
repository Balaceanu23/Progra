#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node {
    int data;
    struct Node* next;
}*p, *newNode, *prim, *ultim;

int InsertNth (struct Node* prim, int index){
    int i;
    p=prim;
    for (i=1; i<=index-2; i++)
        p=p->next;


    newNode = (struct Node*) malloc (sizeof(struct Node));
    scanf ("%d", &newNode->data);
    newNode->next = p->next;
    p->next = newNode;
    }

void Display (struct Node* prim)
{
    p=prim;
    while (p!=NULL)
    {
        printf ("%d -> ", p->data);
        p=p->next;
    }
    printf ("NULL");
}

int main ()
{
    int i, n, index;

    scanf("%d",&n);
    p = (struct Node*) malloc (sizeof(struct Node));
    scanf ("%d", &p->data);
    prim = p;
    ultim = p;

    for (i=1; i<n; i++)
    {
        p=(struct Node*) malloc (sizeof(struct Node));
        scanf ("%d", &p->data);
        ultim->next=p;
        ultim=p;
    }
    p->next=NULL;

    scanf ("%d", &index);
    InsertNth (prim, index);
    Display (prim);
}
