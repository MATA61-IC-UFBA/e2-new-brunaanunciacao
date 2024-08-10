/* main.c */
#include "token.h"
#include <stdio.h>

extern int yylex();
extern int *yytext;

int main () {
    token_t token = -1;
    while (token != EOL) {
        token = yylex();
        switch (token) {
            case EOL:
                printf("código do token: %d\n", token);
                break;
            case NUMBER:
                printf(" constante decimal: %d\n", *yytext);
                break;
            default:
                printf("código do token: %d\n", token);
                break;
    }
}