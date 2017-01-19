#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char daysOfWeek[] = "SunMonTuesWednesThursFriSaturday";

    while (daysOfWeek[i]){
        if(isalnum(daysOfWeek[i]))
            i++;
    }

    printf("%d",i);

    return 0;
}
