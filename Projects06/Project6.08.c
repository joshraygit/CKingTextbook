#include <stdio.h>

int main() {
    int n, start;

    printf("Enter the number of days in the month: ");
    scanf("%d", &n);
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &start);

    for (int i = start - (2 * (start - 1)); i <= n; i++) {
        if ((i + start - 2) % 7 == 0)
            printf("\n");
        if (i <= 0)
            printf("   ");
        else
            printf("%3d", i);
    }

    return 0;
}