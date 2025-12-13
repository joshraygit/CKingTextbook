#include <stdio.h>
#define NUM_RATES ((int) sizeof(value) / sizeof(value[0]))
#define INITIAL_BALANCE 100.00

int main() {
    int i, lowRate, numYears, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &lowRate);
    printf("Enter number of years: ");
    scanf("%d", &numYears);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", lowRate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= numYears; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (int month = 1; month <= 12; month++) 
                value[i] += (lowRate + i) / (12 * 100.0) * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}