
#include <stdio.h>
#include <stdlib.h>


typedef struct list {

    int key;
    struct list *next; //pointer spre urmatorul element al listei
}list;

list *first;

void create(){

    list *p,*q;
    int n,i=2;

    printf("Number of nodes:");
    scanf("%d",&n);

    first=NULL; //initializare
    p=(list*)malloc(sizeof(list));//spatiu pt nod

    printf("First node: ");
    scanf("%d",&p->key);

    p->next=NULL;
    first=p;

    while(i<=n){

        q=(list*)malloc(sizeof(list));

        printf("Value: %d ",i);
        scanf("%d",&q->key );

        p->next=q;
        q->next=NULL;
        p=q;
        i++;
}

}

void display() //afisare lista
{
    list *p;
    p=first;

    while(p){
        printf("%d ",p->key);
        p=p->next;
}
    putchar('\n');
}

void insert_beginning(int x){

    list *p;
    p=(list*)malloc(sizeof(list));
    p->key=x;

    p->next=first;
    first=p;
}

void insert_end(int x){

    list *p,*q;
    for(p=first;p->next;p=p->next)
    q=(list*)malloc(sizeof(list));

    q->key=x;
    p->next=q;
    q->next=NULL;
}

void insert_after(int x){

    list *p, *q;
    for(p=first;p;p=p->next)
    if (p->key==x) {

        q=(list*)malloc(sizeof(list));
        printf("Value: ");
        scanf("%d",&q->key);

        q->next=p->next;
        p->next=q; //dupa nodul indicat de p va urma cel indicat de q
        break;
    }
}

void search(int x){

    list*p;
    int v=0;

    for(p=first;p;p=p->next)
    if (p->key==x) v=1;
    if (v) {
        printf("The value was found ");
        putchar('\n');
    }
    else {
        printf("The value wasn't found");
        putchar('\n');
    }
}

void delete_first(){

    list *p;
    p=first;

    first=first->next;
    free(p);
}

void delete_key(int x){

    list *p,*q;
    q=NULL;

    for(p=first;p&&p->key!=x; q=p, p=p->next);
    if (!p)
    if (p!=first){
    q->next=p->next;

    free(p);
}
    else{
        first=first->next;
        free(p);
    }
    else
        printf("The key doesn't exist");
}
void delete_end(){
        list *p,*q;
        p=first;
        while(q->next->next!=NULL)
        q=q->next;

        p=q->next;
        q->next=NULL;
        free(p);
}

void delete_list(){

    list *p;

    while(first){
    p=first;
    first=first->next;
    free(p);
}
}


int main()
{
    int a;
    printf("Create list \n");
    create();
    printf("Display list: \n");
    display();

    printf("First element: \n");
    scanf("%d",&a);
    insert_beginning(a);
    printf("The new list is: \n");
    display();

    printf("The element to insert at the end :\n");
    scanf("%d",&a);
    insert_end(a);
    printf("The new list is: \n");
    display();

    printf("The key: \n");
    scanf("%d",&a);
    insert_after(a);
    printf("The new list is: \n");
    display();

    printf("The value:  ");
    scanf("%d",&a);
    search(a);


    printf("\nThe key: \n");
    scanf("%d",&a);
    delete_key(a);
    printf("The new list is: \n");
    display();

    printf("\nDelete first node \n");
    delete_first();
    printf("The new list is \n");
    display();


    printf("\nDelete last node \n");
    delete_end();
    printf("The new list is:\n");
    display();


    printf("Delete list \n");
    delete_list();

return 0;
}

