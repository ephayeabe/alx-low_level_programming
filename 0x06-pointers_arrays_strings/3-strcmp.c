#include"main.h"
#include<stdio.h>
#include<string.h>

int _strcmp(char *s1, char *s2){
	return strcmp(s1,s2);
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}