#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LEN 26

void readWords(int counts[LEN]);
bool equalArray(int counts1[LEN], int counts2[LEN]);

int main() {
    char ch;
    int alphabet1[LEN] = {0}, alphabet2[LEN] = {0}, i;

    printf("Enter first word: ");
    readWords(alphabet1);

    printf("Enter second word: ");
    readWords(alphabet2);

    if (equalArray(alphabet1, alphabet2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void readWords(int counts[LEN]) {
    char ch;
    do {
        ch = tolower(getchar());
        if (isalpha(ch))
            counts[ch - 'a']++;
    } while (ch != '\n');
}

bool equalArray(int counts1[LEN], int counts2[LEN]) {
    int i, check[LEN];

    for (i = 0; i < LEN; i++)
        check[i] = counts1[i] - counts2[i];

    for (i = 0; i < LEN; i++)
        if (check[i] != 0)
            return false;

    return true;
}