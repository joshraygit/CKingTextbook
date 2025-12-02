#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, row0, row1, row2, row3, col0, col1, col2, col3, diag0, diag1;

    printf("Enter the numbers 1 through 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("%2d %2d %2d %2d\n", a, b, c, d);
    printf("%2d %2d %2d %2d\n", e, f, g, h);
    printf("%2d %2d %2d %2d\n", i, j, k, l);
    printf("%2d %2d %2d %2d\n\n", m, n, o, p);

    row0 = a + b + c + d; col0 = a + b + c + d;
    row1 = e + f + g + h; col1 = e + f + g + h;
    row2 = i + j + k + l; col2 = i + j + k + l;
    row3 = m + n + o + p; col3 = m + n + o + p;
    diag0 = a + f + k + p; diag1 = d + g + j + m;

    printf("Row sums: %d %d %d %d\n", row0, row1, row2, row3);
    printf("Column sums: %d %d %d %d\n", col0, col1, col2, col3);
    printf("Diagonal sums: %d %d\n", diag0, diag1);

    return 0;
}