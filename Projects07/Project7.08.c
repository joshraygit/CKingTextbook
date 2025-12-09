#include <stdio.h>
#include <ctype.h>

int main()
{
    int userHours, userMins, userTotalTime, dep1 = 480, dep2 = 583, dep3 = 679, dep4 = 767, dep5 = 840, dep6 = 945, dep7 = 1140, dep8 = 1305;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &userHours, &userMins);

    do {
        ch = toupper(getchar());

        if (ch == 'P' && userHours != 12)
            userHours += 12;
        else if (ch == 'A' && userHours == 12)
            userHours = 0;
    } while (ch != '\n');

    userTotalTime = userHours * 60 + userMins;

    if (userTotalTime <= (dep1 + (dep2 - dep1) / 2))
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (userTotalTime <= (dep2 + (dep3 - dep2) / 2))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (userTotalTime <= (dep3 + (dep4 - dep3) / 2))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (userTotalTime <= (dep4 + (dep5 - dep4) / 2))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if (userTotalTime <= (dep5 + (dep6 - dep5) / 2))
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (userTotalTime <= (dep6 + (dep7 - dep6) / 2))
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (userTotalTime <= (dep7 + (dep8 - dep7) / 2))
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    
    return 0;
}