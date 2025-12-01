#include <stdio.h>

int main()
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12)
        hours -= 12;
    
    printf("The equivalent 12-hour time is %.2d:%.2d", hours, minutes);

    return 0;
}