#include <stdio.h>

int main()
{
    int i;
    char daysoftheweek[32] = "SunMonTuesWednesThursFriSaturday";

    for (i=0;i<=2;i++){
        printf("%c",daysoftheweek[i]);
    }
    return 0;
}
