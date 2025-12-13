#include <stdio.h>
#include <ctype.h>
#define LEN 100

int main() {
    int i, len = 0;
    char msg[LEN], ch;

    printf("Enter message: ");
    for (i = 0; i < LEN; i++, len++) {
        ch = getchar();
        if (ch == '\n')
            break;
        msg[i] = ch;
    }
    
    for (i = 0; i < len; i++) {
        msg[i] = toupper(msg[i]);
        switch (msg[i]) {
            case 'A': msg[i] = '4'; break; case 'I': msg[i] = '1'; break;
            case 'B': msg[i] = '8'; break; case 'O': msg[i] = '0'; break;
            case 'E': msg[i] = '3'; break; case 'S': msg[i] = '5'; break;
        }
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < len; i++)
        printf("%c", msg[i]);
    printf("!!!!!!!!!!");

    return 0;
}