#include <stdio.h>

float taxCalc(float income);

int main()
{
    float income, taxDue;

    printf("Enter your income in dollars and cents: ");
    scanf("%f", &income);

    taxDue = taxCalc(income);
    printf("Here are your due taxes: $%.2f", taxDue);

    return 0;
}

float taxCalc(float income) {
    float taxDue = 0.00f;

    if (income <= 750.00f)
        taxDue = income * 0.01f;
    else if (income > 750.00f && income <= 2250.00f)
        taxDue = 7.50f + 0.02 * (income - 750.00f);
    else if (income > 2250.00f && income <= 3750.00f)
        taxDue = 37.50f + 0.03 * (income - 2250.00f);
    else if (income > 3750.00f && income <= 5250.00f)
        taxDue = 82.50f + 0.04 * (income - 3750.00f);
    else if (income > 5250.00f && income <= 7000.00f)
        taxDue = 142.50f + 0.05 * (income - 5250.00f);
    else if (income > 7000.00)
        taxDue = 230.00f + 0.06 * (income - 7000.00f);

    return taxDue;
}