#include <stdio.h>
#include <ctype.h>
#define LEN 26

int main() {
    char ch;
    int alphabet[LEN] = {0}, i;

    printf("Enter first word: ");
    do {
        ch = tolower(getchar());
        if (isalpha(ch))
            alphabet[ch - 'a']++;
    } while (ch != '\n');

    printf("Enter second word: ");
    do {
        ch = tolower(getchar());
        if (isalpha(ch))
            alphabet[ch - 'a']--;
    } while (ch != '\n');

    for (i = 0; i < LEN; i++) {
        if (alphabet[i] != 0) {
            printf("The words are not anagrams.\n");
            break;
        }
        if ((i == LEN - 1) && (alphabet[i] == 0)) {
            printf("The words are anagrams.\n");
            break;
        }
    }

    return 0;
}