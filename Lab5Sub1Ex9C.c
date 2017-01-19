#include <stdio.h>

int main()
{
    int i;
    char daysOfWeek[32] = "SunMonTuesWednesThursFriSaturday";

    for(i=6;i<10;i++){

        printf("%c",daysOfWeek[i]);

    }
    for(i=29;i<32;i++){

        printf("%c",daysOfWeek[i]);

    }
    return 0;
}
