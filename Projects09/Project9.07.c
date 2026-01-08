#include <stdio.h>

float power(float x, int n);

int main() {
    float x;
    int n;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    printf("Enter a non-negative, integer exponent: ");
    scanf("%d", &n);

    printf("The value of %g^%d is %g", x, n, power(x, n));

    return 0;
}

float power(float x, int n) {
    if (n == 0)
        return 1;
    
    if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return x * power(x, n - 1);
}