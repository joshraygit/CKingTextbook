#include <stdio.h>

int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        check, firstSum, secondSum, checkSum;

    printf("Enter the 12-digit UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,
        &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &check);
    
    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    checkSum = (9 - ((3 * firstSum + secondSum) - 1) % 10);

    switch (checkSum == check) {
        case 1: printf("VALID");
            break;
        default: printf("INVALID");
    }

    return 0;
}