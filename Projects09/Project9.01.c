#include <stdio.h>

void selectionSort (int arr[], int n) {
    int largest = arr[0], i, place = 0;

    if (n <= 0)
        return;

    for (i = 1; i < n; i++)
        if (arr[i] > largest) {
            largest = arr[i];
            place = i;
        }
    
    arr[place] = arr[n - 1];
    arr[n - 1] = largest;

    selectionSort(arr, n - 1);
}

int main() {
    int n, i;

    printf("Enter number of integers to sort: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter a series of integers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("Array after sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    putchar('\n');
        
    return 0;
}