#include <stdio.h>
#define YR_TO_MO_RATE_CONVERTER (1.0f / 1200.0f)

int main() {
    int months;
    float loan, IntRate, moPayment;

    printf("Enter your loan amount: ");
    scanf("%f", &loan);
    printf("Enter your interest rate: ");
    scanf("%f", &IntRate);
    printf("Enter your monthly payment: ");
    scanf("%f", &moPayment);
    printf("How many months of payment: ");
    scanf("%d", &months);

    for (int payments = 1; months > 0; months--, payments++)
        printf("Balance remaining after %d month(s): $%.2f\n", payments, loan = loan * (1 + IntRate * YR_TO_MO_RATE_CONVERTER) - moPayment);

    return 0;
}