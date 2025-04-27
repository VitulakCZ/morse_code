#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LENGTH 1024

char znaky[MAX_LENGTH];
char morseovka[MAX_LENGTH];
char *text_to_morseovka(const char *text) {
    memset(morseovka, 0, MAX_LENGTH);
    int delka_textu = strlen(text);
    int delka_morseovky = 0;
    for (size_t i = 0; i < delka_textu; i++) {
        bool konec = false;
        bool mezera = false;
        switch (text[i]) {
            case '!':
                if (i + 1 != delka_textu && text[i+1] == 'q') {
                    memset(morseovka, 0, MAX_LENGTH);
                    return morseovka;
                }
                morseovka[delka_morseovky++] = '!';
                break;
            case ' ':
                if (i + 1 != delka_textu && text[i+1] != ' ') {
                    morseovka[delka_morseovky++] = '/';
                }
                mezera = true;
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
            case '?':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '\'':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case '/':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case '(':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case ')':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case ':':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                break;
            case '=':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case '+':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case '-':
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                break;
            case '"':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                break;
            case '@':
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
                morseovka[delka_morseovky++] = '-';
                morseovka[delka_morseovky++] = '.';
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
        if (!konec && !mezera && (i + 1 != delka_textu && text[i+1] != ' ')) morseovka[delka_morseovky++] = ' ';
    }

    return morseovka;
}

char lookup_table() {
    if (strcmp(znaky, "!q") == 0)
        return 0;
    if (strcmp(znaky, "") == 0)
        return 0;
    if (strcmp(znaky, ".-.-.-") == 0)
        return '.';
    if (strcmp(znaky, "..-..") == 0)
        return ',';
    if (strcmp(znaky, "..--..") == 0)
        return '?';
    if (strcmp(znaky, ".----.") == 0)
        return '\'';
    if (strcmp(znaky, "-..-.") == 0)
        return '/';
    if (strcmp(znaky, "-.--.") == 0)
        return '(';
    if (strcmp(znaky, "-.--.-") == 0)
        return ')';
    if (strcmp(znaky, "---...") == 0)
        return ':';
    if (strcmp(znaky, "-...-") == 0)
        return '=';
    if (strcmp(znaky, ".-.-.") == 0)
        return '+';
    if (strcmp(znaky, "-....-") == 0)
        return '-';
    if (strcmp(znaky, ".-..-.") == 0)
        return '"';
    if (strcmp(znaky, ".--.-.") == 0)
        return '@';
    if (strcmp(znaky, ".-") == 0)
        return 'A';
    if (strcmp(znaky, "-...") == 0)
        return 'B';
    if (strcmp(znaky, "-.-.") == 0)
        return 'C';
    if (strcmp(znaky, "-..") == 0)
        return 'D';
    if (strcmp(znaky, ".") == 0)
        return 'E';
    if (strcmp(znaky, "..-.") == 0)
        return 'F';
    if (strcmp(znaky, "--.") == 0)
        return 'G';
    if (strcmp(znaky, "....") == 0)
        return 'H';
    if (strcmp(znaky, "..") == 0)
        return 'I';
    if (strcmp(znaky, ".---") == 0)
        return 'J';
    if (strcmp(znaky, "-.-") == 0)
        return 'K';
    if (strcmp(znaky, ".-..") == 0)
        return 'L';
    if (strcmp(znaky, "--") == 0)
        return 'M';
    if (strcmp(znaky, "-.") == 0)
        return 'N';
    if (strcmp(znaky, "---") == 0)
        return 'O';
    if (strcmp(znaky, ".--.") == 0)
        return 'P';
    if (strcmp(znaky, "--.-") == 0)
        return 'Q';
    if (strcmp(znaky, ".-.") == 0)
        return 'R';
    if (strcmp(znaky, "...") == 0)
        return 'S';
    if (strcmp(znaky, "-") == 0)
        return 'T';
    if (strcmp(znaky, "..-") == 0)
        return 'U';
    if (strcmp(znaky, "...-") == 0)
        return 'V';
    if (strcmp(znaky, ".--") == 0)
        return 'W';
    if (strcmp(znaky, "-..-") == 0)
        return 'X';
    if (strcmp(znaky, "-.--") == 0)
        return 'Y';
    if (strcmp(znaky, "--..") == 0)
        return 'Z';
    if (strcmp(znaky, ".----") == 0)
        return '1';
    if (strcmp(znaky, "..---") == 0)
        return '2';
    if (strcmp(znaky, "...--") == 0)
        return '3';
    if (strcmp(znaky, "....-") == 0)
        return '4';
    if (strcmp(znaky, ".....") == 0)
        return '5';
    if (strcmp(znaky, "-....") == 0)
        return '6';
    if (strcmp(znaky, "--...") == 0)
        return '7';
    if (strcmp(znaky, "---..") == 0)
        return '8';
    if (strcmp(znaky, "----.") == 0)
        return '9';
    if (strcmp(znaky, "-----") == 0)
        return '0';
    return '?';
}

void morseovka_to_text(const char *kod) {
    memset(znaky, 0, MAX_LENGTH);
    int delka_kodu = 0;
    int pocet_znaku = 0;
    bool znak = false;
    bool znak_v_kodu = false;
    while (kod[delka_kodu] != '\0') delka_kodu++;
    delka_kodu--;
    for (int i = 0; i < delka_kodu; i++) {
        if (kod[i] == '/' && znak) {
            printf("%c ", lookup_table());
            memset(znaky, 0, MAX_LENGTH);
            pocet_znaku = 0;
        } else if (kod[i] == '/' && i > 0 && kod[i-1] == ' ' && znak_v_kodu) {
            printf(" ");
        }
        if (kod[i] == ' ' && znak) {
            printf("%c", lookup_table());
            memset(znaky, 0, MAX_LENGTH);
            pocet_znaku = 0;
            znak = false;
        }
        if (kod[i] != ' ' && kod[i] != '/') {
            znak = true;
            znak_v_kodu = true;
            znaky[pocet_znaku++] = kod[i];
        }
        if ((i + 1 == delka_kodu) && kod[i] != ' ') {
            printf("%c\n", lookup_table());
            memset(znaky, 0, MAX_LENGTH);
        } else if (i + 1 == delka_kodu) {
            printf("\n");
            memset(znaky, 0, MAX_LENGTH);
        }
    }
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
        if (strcmp(input, "\n") == 0) {
            morseovka = !morseovka;
            continue;
        }
        (!morseovka) ? printf("%s", text_to_morseovka(input)) : morseovka_to_text(input);
    }
    return 0;
}
