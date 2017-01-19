#include <stdio.h>
#include <stdlib.h>

struct list {
	int info;
	struct list *leg;
}*prim, *ultim, *p;

int Count (struct list *prim, int number){
	int app=0;
	p=prim;
	while (p!= NULL)
    {

        if (p->info==number)
            app++;
        p=p->leg;
    }
    return app;
}

int main()
{
	int i,n, number;
	scanf ("%d", &n);
	p=(struct list*) malloc(sizeof(struct list));
	scanf ("%d", &p->info);
	prim=p;
	ultim=p;

	for(i=1; i<n; i++)
	{
		p=(struct list*)malloc(sizeof(struct list));
		scanf("%d",&p->info);
            ultim->leg = p;
            ultim = p;
	}
	p->leg = NULL;

printf ("\n");
scanf ("%d", &number);
printf ("\n%d", Count(p,number));

return 0;
}
