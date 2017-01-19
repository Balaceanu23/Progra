#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char daysOfWeek[32] = "SunMonTuesWednesThursFriSaturday";
    for(i=24;i<=32;i++){
        printf("%c",toupper(daysOfWeek[i]));
    }
    return 0;
}
