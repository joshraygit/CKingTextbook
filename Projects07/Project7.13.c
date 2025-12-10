#include <stdio.h>

int main() {
    float average, wordCount, letterCount;
    char ch;

    printf("Enter a sentence: ");

    for (;;) {
        for (;;) {
            ch = getchar();
            if (ch == ' ')
                break;
            else if (ch == '\n')
                break;
            else
                letterCount++;
        }

        if (ch == '\n') {
            wordCount++;
            break;
        }
        else if (ch == ' ')
            wordCount++;
    }
        
    average = letterCount / wordCount;

    printf("Average word length: %.1f", average);

    return 0;
}