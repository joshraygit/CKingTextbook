#include <stdio.h>

int main() {
    int m, n, rem;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    for (; n > 0 ; m = n, n = rem)
        rem = m % n;

    printf("The greatest common divisor is: %d", m);
    return 0;
}