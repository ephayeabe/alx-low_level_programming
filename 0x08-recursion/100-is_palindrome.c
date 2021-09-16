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
    int n = strlen(s);
    
    if (n == 0){
        return 1;
	}
     
    return is_pal_rec(s, 0, n - 1);
}
 
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}