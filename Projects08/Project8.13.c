#include <stdio.h>
#define LAST_NAME 20

int main() {
    char firstCh, lastCh[LAST_NAME];
    int i;

    printf("Enter a first and last name: ");
    while ((firstCh = getchar()) == ' ');

    while (getchar() != ' ');

    while ((lastCh[0] = getchar()) == ' ');
    
    for (i = 0; i < LAST_NAME; i++) {
        printf("%c", lastCh[i]);
        if ((lastCh[i + 1] = getchar()) == ' ')
            break;
        else if (lastCh[i + 1] == '\n')
            break;
    }

    printf(", %c.\n", firstCh);

    return 0;
}