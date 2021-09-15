#include<main.h>
int counter = 0;

void _print_rev_recursion(char *s) {
    if (*(s + counter) == '\0') {
        return;
    }
    counter++;
    _print_rev_recursion(s);
    putchar(s[--counter]);
}

int main() {
    _print_rev_recursion("\nColton Walker");
    return 0;
}