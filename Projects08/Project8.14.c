#include <stdio.h>
#define LEN 50

int main() {
    char term, sentence[LEN];
    int i, len = 0, space;

    printf("Enter a sentence: ");

    for (i = 0; i < LEN; i++, len++) {
        scanf("%c", &sentence[i]);
        if ((sentence[i] == '.') || (sentence[i] == '?') || (sentence[i] == '!')) {
            term = sentence[i];
            break;
        }
    }

    printf("Reversal of sentence:");

    for (i = len - 1; i >= 0; i--) {
        if ((sentence[i] == ' ') || (i == 0)) {
            if (i == 0)
                printf(" ");
            for (space = i; space < len; space++)
                printf("%c", sentence[space]);
            len = i;
        }
    }
    printf("%c", term);

    return 0;
}