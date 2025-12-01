#include <stdio.h>

int main()
{
    int num, num10s, num1s;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    num10s = num / 10;
    num1s = num % 10;

    printf("You entered: ");

    if (num == 0)
        printf("zero");

    else if (num < 10 || num >= 100)
        printf("An invalid number");

    else if (num >= 10 && num <= 19)
        switch(num) {
            case 10:
                printf("ten");
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirteen");
                break;
            case 14:
                printf("fourteen");
                break;
            case 15:
                printf("fifteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
        }

    else if (num >= 10 && num < 100) {
        switch (num10s) {
            case 9:
                printf("ninety");
                break;
            case 8:
                printf("eighty");
                break;
            case 7:
                printf("seventy");
                break;
            case 6:
                printf("sixty");
                break;
            case 5:
                printf("fifty");
                break;
            case 4:
                printf("fourty");
                break;
            case 3:
                printf("thirty");
                break;
            case 2:
                printf("twenty");
                break;
        }

        switch (num1s) {
            case 9:
                printf("-nine");
                break;
            case 8:
                printf("-eight");
                break;
            case 7:
                printf("-seven");
                break;
            case 6:
                printf("-six");
                break;
            case 5:
                printf("-five");
                break;
            case 4:
                printf("-four");
                break;
            case 3:
                printf("-three");
                break;
            case 2:
                printf("-two");
                break;
            case 1:
                printf("-one");
                break;
        }
    }

    return 0;
}