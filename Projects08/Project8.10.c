#include <stdio.h>
#include <math.h>
#define TIMES 8

int main()
{
    int userHours, userMins, userTotalTime, dep[TIMES] = {480, 583, 679, 767, 840, 945, 1140, 1305},
    arr[TIMES] = {616, 712, 811, 900, 968, 1075, 1280, 1438}, i, depTime, depHours, depMins, arrTime, arrHours, arrMins;
    char depMeridian, arrMeridian;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &userHours, &userMins);
    userTotalTime = userHours * 60 + userMins;
    depTime = dep[0];

    for (i = 0; i < TIMES - 1; i++) {
        if (fabs(userTotalTime - depTime) > fabs(userTotalTime - dep[i + 1])) {
            depTime = dep[i + 1];
            arrTime = arr[i + 1];
        }
        if (userTotalTime < dep[0]) {
            depTime = dep[0];
            arrTime = arr[0];
            break;
        }
    }

    depHours = depTime / 60;
    depMins = depTime % 60;
    arrHours = arrTime / 60;
    arrMins =  arrTime % 60;

    if ((depHours < 12) || (depHours == 24)) {
        depHours = (depHours == 24) ? 12 : depHours;
        depMeridian = 'a';
    }
    else {
        depHours = (depHours == 12) ? depHours: depHours - 12;
        depMeridian = 'p';
    }

    if ((arrHours < 12) || (arrHours == 24)) {
        arrHours = (arrHours == 24) ? 12 : arrHours;
        arrMeridian = 'a';
    }
    else {
        arrHours = (arrHours == 12) ? arrHours: arrHours - 12;
        arrMeridian = 'p';
    }

    printf("Your closest flight departs at %.2d:%.2d %c.m and arrives at %.2d:%.2d %c.m", depHours, depMins, depMeridian, arrHours, arrMins, arrMeridian);

    return 0;
}