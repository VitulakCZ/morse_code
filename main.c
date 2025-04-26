#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LENGTH 256

char morseovka[MAX_LENGTH];
char *text_to_morseovka(const char *text) {
    memset(morseovka, 0, MAX_LENGTH);
    int delka_textu = strlen(text);
    int delka_morseovky = 0;
    for (size_t i = 0; i < delka_textu; i++) {
        bool konec = false;
        switch (text[i]) {
            case '!':
                memset(morseovka, 0, MAX_LENGTH);
                return morseovka;
                break;
            case ' ':
                break;
            case '.':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case ',':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'A':
            case 'a':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'B':
            case 'b':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'C':
            case 'c':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'D':
            case 'd':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'E':
            case 'e':
                morseovka[delka_morseovky++] = '.';
                break;
            case 'F':
            case 'f':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'G':
            case 'g':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'H':
            case 'h':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'I':
            case 'i':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'J':
            case 'j':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'K':
            case 'k':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'L':
            case 'l':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'M':
            case 'm':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'N':
            case 'n':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'O':
            case 'o':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'P':
            case 'p':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'Q':
            case 'q':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'R':
            case 'r':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'S':
            case 's':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case 'T':
            case 't':
                morseovka[delka_morseovky++] = '-';
                break;
            case 'U':
            case 'u':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'V':
            case 'v':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'W':
            case 'w':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'X':
            case 'x':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'Y':
            case 'y':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case 'Z':
            case 'z':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '1':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case '2':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case '3':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case '4':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case '5':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '6':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '7':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '8':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '9':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case '0':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                break;
            case '\n':
                morseovka[delka_morseovky++] = '\n';
                konec = true;
                break;
            default:
                morseovka[delka_morseovky++] = '?';
        }
        if (!konec) morseovka[delka_morseovky++] = ' ';
    }

    return morseovka;
}

int main() {
    bool morseovka = false;
    char *input;
    while (strcmp(input, "!q\n") != 0) {
        if (!morseovka)
            printf("Zadejte text (ENTER pro změnu na morseovku, !q = quit): ");
        else
            printf("Zadejte kód (ENTER pro změnu na text, !q = quit): ");
        fgets(input, MAX_LENGTH, stdin);
        printf("%s", text_to_morseovka(input));
    }
    return 0;
}
