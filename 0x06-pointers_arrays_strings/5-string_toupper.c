#include"main.h"
#include<stdio.h>
#include<string.h>
char *string_toupper(char *str){
	return	strupr(str);
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}