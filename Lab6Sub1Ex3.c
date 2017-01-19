
#include<stdio.h>

int s1(char line[],int max);
void s2(char *,char *);

int main()
{
    int len;
    char s[100],t[100];

    putchar('s');
    putchar(':');
    s1(s,100);

    putchar('t');
    putchar(':');
    s1(t,100);

    s2(s,t);

    printf("%s",s);

    return 0;
}

int s1(char s[],int lim)
{
    int c,i;

    for(i=0;i<lim-1 && (c=getchar()) !='\n';++i)
        s[i] = c;

    if(c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

void s2(char *s,char *t)
{
    while(*s!='\0')
        s++;
    s--;
    while((*s=*t)!='\0')
    {
        s++;
        t++;
    }
}
