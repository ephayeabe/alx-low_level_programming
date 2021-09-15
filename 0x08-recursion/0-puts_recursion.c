#include<main.h>

int counter = 0;

void _puts_recursion(char *s) {
    if (s[counter] == '\0') {
        putchar('\n');
        return;
    }
    putchar(s[counter]);
    counter++;
    _puts_recursion(s);
}




