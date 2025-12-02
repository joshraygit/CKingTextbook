#include <stdio.h>
#define YR_TO_MO_RATE_CONVERTER (1.0f / 1200.0f)

int main() {
    float loan, IntRate, moPayment;

    printf("Enter your loan amount: ");
    scanf("%f", &loan);
    printf("Enter your interest rate: ");
    scanf("%f", &IntRate);
    printf("Enter your monthly payment: ");
    scanf("%f", &moPayment);

    printf("Balance remaining after first payment: $%.2f\n", loan = loan * (1 + IntRate * YR_TO_MO_RATE_CONVERTER) - moPayment);
    printf("Balance remaining after second payment: $%.2f\n", loan = loan * (1 + IntRate * YR_TO_MO_RATE_CONVERTER) - moPayment);
    printf("Balance remaining after third payment: $%.2f\n", loan = loan * (1 + IntRate * YR_TO_MO_RATE_CONVERTER) - moPayment);

    return 0;
}