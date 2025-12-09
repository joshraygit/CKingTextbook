#include <stdio.h>

int main() {
    int num1, denom1, num2, denom2, resultNum, resultDenom;
    char ch;

    printf("Enter two fractions separated by an operator (+, -, *, or /): ");
    scanf("%d/%d", &num1, &denom1);
    ch = getchar();
    scanf("%d/%d", &num2, &denom2);

    switch (ch) {
        case '+': resultNum = num1 * denom2 + num2 * denom1; resultDenom = denom1 * denom2; break;
        case '-': resultNum = num1 * denom2 - num2 * denom1; resultDenom = denom1 * denom2; break;
        case '*': resultNum = num1 * num2; resultDenom = denom1 * denom2; break;
        case '/': resultNum = num1 * denom2; resultDenom = denom1 * num2; break;
        default: break;
    }

    printf("The sum is: %d/%d\n", resultNum, resultDenom);

    return 0;
}