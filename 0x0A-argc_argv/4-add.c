#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>

int isNumber(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i]) == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int count;
    int sum = 0;

    if (argc > 1) {
        for (count = 1; count < argc; count++) {
            if (isNumber(argv[count])) {
                sum = sum + atoi(argv[count]);
            } else {
                printf("Error");
                return 1;
            }
        }
    }
    printf("%d", sum);


    return 0;
}