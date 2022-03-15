#include <stdio.h>
#include "prog1.h"
#include <string.h>


int main() {
    char string[100], karakter;
    int szam = 0;

    printf("Adjon meg a szót: ");
    fgets(string, sizeof(string), stdin);

    printf("Adja meg melyik karaktert keressük: ");
    scanf("%c", &karakter);

    for (int i = 0; string[i] != '\0'; ++i) {
        if (karakter == string[i])
            szam++;
    }

    printf("Ennyiszer van benne: %d",szam);
    return 0;
}