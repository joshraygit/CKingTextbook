#include <stdio.h>
#define ROW 5
#define COL 5

int main() {
    int a[ROW][COL], i, j, rowSums[ROW] = {0}, colSums[COL] = {0};

    for (i = 0; i < ROW; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
            rowSums[i] += a[i][j];
            colSums[j] += a[i][j];
        }
    }

    printf("\nRow totals:");
    for (i = 0; i < ROW; i++)
        printf(" %d", rowSums[i]);

    printf("\nColumn totals:");
    for (j = 0; j < COL; j++)
        printf(" %d", colSums[j]);

    return 0;
}