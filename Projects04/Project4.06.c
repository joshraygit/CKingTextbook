#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, checkDigit;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    checkDigit = 9 - (((3 * (b + d + f + h + j + l) + a + c + e + g + i + k) - 1) % 10);
    printf("Check digit: %d", checkDigit);

    return 0;
}