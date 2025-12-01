#include <stdio.h>

int main()
{   
    int speed;

    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);

    if (speed > 63)
        printf("The wind is a hurricane!");
    else if (speed <= 63 && speed >= 48)
        printf("The wind is a storm!");
    else if (speed <= 47 && speed >= 28)
        printf("The wind is a gale!");
    else if (speed <= 27 && speed >= 4)
        printf("The wind is a breeze!");
    else if (speed <= 3 && speed >= 1)
        printf("The wind is light air!");
    else printf("The wind is calm");

    return 0;
}