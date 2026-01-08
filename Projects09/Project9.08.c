#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int rollDice(void);
bool playGame(void);

int main() {
    int wins = 0, losses = 0;

    srand((unsigned) time(NULL));

    while (true) {
        if (playGame()) {
            printf("You win!\n\n");
            wins++;
        }
        else {
            printf("You lose!\n\n");
            losses++;
        }

        printf("Play again? ");

        if (toupper(getchar()) != 'Y')
            break;

        printf("\n");
        while (getchar() != '\n');
    }

    printf("\nWins: %d Losses: %d\n", wins, losses);

    return 0;
}

int rollDice(void) {
    int d1, d2;

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;

    return d1 + d2;
}

bool playGame(void) {
    int roll, point;

    roll = rollDice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11)
        return true;
    else if (roll == 2 || roll == 3 || roll == 12)
        return false;

    point = roll;
    printf("Your point is: %d\n", point);

    while (true) {
        roll = rollDice();
        printf("You rolled: %d\n", roll);

        if (roll == point)
            return true;
        else if (roll == 7)
            return false;
    }
}