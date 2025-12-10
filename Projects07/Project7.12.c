#include <stdio.h>

int main() {
    float expr1, expr2;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &expr1);

    for (;;) {
        operator = getchar();

        if (operator == '\n')
            break;
        
        scanf("%f", &expr2);

        switch (operator) {
            case '+': expr1 += expr2; break;
            case '-': expr1 -= expr2; break;
            case '*': expr1 *= expr2; break;
            case '/': expr1 /= expr2; break;
        }
    }

    printf("Value of expression: %g", expr1);

    return 0;
}