#include <stdio.h>

int main()
{
    int a, b, c, d, great1, low1, great2, low2, greatest, lowest;

    printf("Input four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b){
        great1 = a;
        low1 = b;
    }
    else
        great1 = b;
        low1 = a;

    if (c > d){
        great2 = c;
        low2 = d;
    }
    else
        great2 = d;
        low2 = c;

    if (great1 > great2)
        greatest = great1;
    else
        greatest = great2;

    if (low1 < low2)
        lowest = low1;
    else
        lowest = low2;

    printf("Largest: %d\nSmallest: %d\n", greatest, lowest);
    
    return 0;
}