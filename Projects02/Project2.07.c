#include <stdio.h>

int main() {
    int money, twenties, tens, fives;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    twenties = money / 20;
    money -= twenties * 20;
    tens = money / 10;
    money -= tens * 10;
    fives = money / 5;
    money -= fives * 5;
    
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, money);

    return 0;
}