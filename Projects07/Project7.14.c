#include <stdio.h>
#include <math.h>
#define PRECISION .00001f

int main() {
    double x, y = 2, z, avg = 1;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (fabs(y - avg) >= PRECISION * y) {
        y = avg;
        z = x / y;
        avg = (y + z) / 2;
    }

    printf("The square root is: %lf", avg);

    return 0;
}