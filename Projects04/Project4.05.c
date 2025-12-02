#include <stdio.h>

int main() {
    int d, i0, i1, i2, i3, i4, j0, j1, j2, j3, j4, firstSum, secondSum, checkDigit;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i0, &i1, &i2, &i3, &i4, &j0, &j1, &j2, &j3, &j4);

    firstSum = d + i1 + i3 + j0 + j2 + j4;
    secondSum = i0 + i2 + i4 + j1 + j3;
    checkDigit = 9 - (((3 * firstSum + secondSum) - 1) % 10);

    printf("Check digit is: %d\n", checkDigit);


    return 0;
}