#include <stdio.h>

int strlen_array( char array[] );
int strlen_pointer( char *strp );

int main()
{
    int n,n_p;
    char s[100];

    gets(s);

    char *ps=s;

    n=strlen_pointer(ps);
    n_p=strlen_array(s);

    printf("%d \n",n);
    printf("%d \n",n_p);


    return 0;
}

int strlen_array( char array[] ){
    int t=0;
    int i;

    for(i=0; array[i] ;i++){
        if(array[i] != '\0' ){
            t++;
        }
    }

    return t;
}

int strlen_pointer( char *strp ){
    int l=0;

    while(*strp != '\0'){
        l++;
        strp++;
    }

    return l;
}
