#include <stdio.h>
#include <stdbool.h>

int main() {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    while(true) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n == 0)
            break;

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        for (digit = 0; digit < 10; digit++)
            digit_seen[digit] = false;
    }

    return 0;
}