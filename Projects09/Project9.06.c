#include <stdio.h>

float polynomial(float x);

int main() {
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %g", polynomial(x));

    return 0;
}

float polynomial(float x) {
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}