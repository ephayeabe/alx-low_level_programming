#include<main.h>
int counter=0;
int _strlen_recursion(char *s){
    if(s[counter]=='\0')
        return counter;
    counter++;
    _strlen_recursion(s);


}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
