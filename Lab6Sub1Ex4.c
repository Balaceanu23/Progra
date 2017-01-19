#include<stdio.h>

int s1(char s[],int max);
int strend(char *s,char *t);
int s2(char *t);

int main()
{
    char s[100],t[100];
    int r;
    s1(s,100);
    s1(t,100);
    r = strend(s,t);
    printf("%d",r);
    return 0;
}

int s1(char s[],int l)
{
    int c,i;

    for(i=0;i<l-1 && (c=getchar())!='\n';++i)
        s[i]=c;

    if(c=='\n')
    {
        s[i]=c;
        ++i;
    }
    s[i]='\0';

    return i;
}

int strend(char *s,char *t)
{
    int len;
    len=s2(t);
    while(*s!='\0')
        s++;
    s--;

    while(*t!='\0')
        t++;

    t--;
    while(len > 0)
    {
        if(*t==*s)
        {
            t--;
            s--;
            len--;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

int s2(char *t)
{
    char *p;
    p=t;

    while(*p!='\0')
        p++;

    return p-t;
}
