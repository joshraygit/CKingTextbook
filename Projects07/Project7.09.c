#include <stdio.h>
#include <ctype.h>

int main() {
    int userHours, userMins;
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

    printf("Equivalent 24-hour time: %.2d:%.2d", userHours, userMins);

    return 0;
}