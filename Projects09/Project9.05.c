#include <stdio.h>

void createMagicSquare(int n, char magicSquare[n][n]);
void printMagicSquare(int n, char magicSquare[n][n]);

int main() {
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char square[n][n];

    createMagicSquare(n, square);
    printMagicSquare(n, square);

    return 0;
}

void createMagicSquare(int n, char magicSquare[n][n]) {
    int i, j, count;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            magicSquare[i][j] = 0;
    }

    i = 0;
    j = n / 2;
    magicSquare[i][j] = 1;

    for (count = 2; count <= n * n; count++) {
        if (magicSquare[(i - 1 + n) % n][(j + 1) % n] == 0) {
            magicSquare[(i - 1 + n) % n][(j + 1) % n] = count;
            i = (i - 1 + n) % n;
            j = (j + 1) % n;
        }
        else if (magicSquare[(i + 1) % n][j] == 0) {
            magicSquare[(i + 1) % n][j] = count;
            i = (i + 1) % n;
        }
    }
}

void printMagicSquare(int n, char magicSquare[n][n]) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", magicSquare[i][j]);
        printf("\n");
    }
}