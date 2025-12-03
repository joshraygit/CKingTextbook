#include <stdio.h>

int main() {
    float e, denom, epsilon, term;
    int n, i;

    printf("Enter an accuracy number: ");
    scanf("%f", &epsilon);

    for (e = 1, n = 1, term = 1; epsilon < term; e += term, n++) {
        for (i = n, denom = 1; i > 0; i--)
            denom = denom * i;
            term = 1 / denom;
    }

    printf("e is approximately: %f", e);

    return 0;
}