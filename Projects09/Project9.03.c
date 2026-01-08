#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 10
#define COLS 10
#define N 0
#define E 1
#define S 2
#define W 3

void generateRandomWalk(char walk[10][10]);
void printArray(char walk[10][10]);

int main() {
    char board[ROWS][COLS];

    srand((unsigned) time(NULL));
    generateRandomWalk(board);

    printArray(board);

    return 0;
}

void generateRandomWalk(char walk[ROWS][COLS]) {
    int i, j, direction;
    char ch = 'A';

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            walk[i][j] = '.';

    i = 0;
    j = 0;
    walk[i][j] = ch;

    for (; ch < 'Z';) {
        if ((walk[i - 1][j] != '.' || i == 0) && (walk[i][j + 1] != '.' || j == 9) && 
            (walk[i + 1][j] != '.' || i == 9) && (walk[i][j - 1] != '.' || j == 0))
            break;

        direction = rand() % 4;

        if (direction == N && walk[i - 1][j] == '.' && i != 0) {
            walk[i - 1][j] = ch + 1; i--; ch++;
        }
        else if (direction == E && walk[i][j + 1] == '.' && j != 9) {
            walk[i][j + 1] = ch + 1; j++; ch++;
        }
        else if (direction == S && walk[i + 1][j] == '.' && i != 9) {
            walk[i + 1][j] = ch + 1; i++; ch++;
        }
        else if (direction == W && walk[i][j - 1] == '.' && j != 0) {
            walk[i][j - 1] = ch + 1; j--; ch++;
        }
    }
}

void printArray(char walk[10][10]) {
    int i, j;

    for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++)
                printf("%c ", walk[i][j]);
            printf("\n");
    }
}