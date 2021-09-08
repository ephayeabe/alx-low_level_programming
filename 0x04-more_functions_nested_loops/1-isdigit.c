#include"main.h"
#include<stdio.h>
#include<ctype.h>

int _isdigit(int c){
		if(isdigit(c))
			return 1;
		else
			return 0;
	
}
int main(){
	char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}