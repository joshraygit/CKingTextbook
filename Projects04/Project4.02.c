#include <stdio.h>

int main() {
    int x, digit0, digit1, digit2;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    digit0 = x % 10;
    digit1 = (x / 10) % 10;
    digit2 = x / 100;

    printf("The reversal is: %d%d%d", digit0, digit1, digit2);

    return 0;
}