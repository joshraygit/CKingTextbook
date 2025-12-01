#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number less than 1000: ");
    scanf("%d", &num);

    if (num > 0 && num < 10)
        printf("%d is a one-digit number.", num);
    else if (num > 10 && num < 100)
        printf("%d is a two-digit number", num);
    else if (num > 100 && num < 1000)
        printf("%d is a three-digit number", num);
    else printf("Invalid number");

    return 0;
}