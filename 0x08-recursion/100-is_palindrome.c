#include"main.h"
int is_pal_rec(char *str, int s, int e)
{
     
    if (s == e){
		return 1;
	}
 
    if (str[s] != str[e]){
		return 	0;
	}

    if (s < e + 1){
		return is_pal_rec(str, s + 1, e - 1);
	}
 
    return 1;
}
 
int is_palindrome(char *s)
{
    int n;
	n = strlen(s);
    
    if (n == 0){
        return 1;
	}
     
    return is_pal_rec(s, 0, n - 1);
}
 
