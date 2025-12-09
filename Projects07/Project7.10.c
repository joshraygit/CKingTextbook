#include <stdio.h>
#include <ctype.h>

int main() {
    int vowels = 0;
    char ch;

    printf("Enter a sentence: ");

    do {
        ch = toupper(getchar());
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U': vowels++; break;
            default: break;
        }
    } while (ch != '\n');

    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}