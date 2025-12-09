#include <stdio.h>

int main() {
    char firstCh, lastCh;

    printf("Enter a first and last name: ");
    while ((firstCh = getchar()) == ' ');

    while (getchar() != ' ');

    while ((lastCh = getchar()) == ' ');
    
    do {
        printf("%c", lastCh);
        if ((lastCh = getchar()) == ' ')
            break;
    } while (lastCh != '\n');

    printf(", %c.\n", firstCh);

    return 0;
}