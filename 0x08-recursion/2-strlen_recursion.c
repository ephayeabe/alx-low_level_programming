#include"main.h"
int counter=0;
int _strlen_recursion(char *s){
    if(s[counter]=='\0')
        return counter;
    counter++;
    return _strlen_recursion(s);

}


