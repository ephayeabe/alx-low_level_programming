


#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int squre_root_wrapper(int n, int min, int max);

int _sqrt_recursion(int n) {
    return squre_root_wrapper(n, 1, n);
}

int squre_root_wrapper(int n, int min, int max) {
    if (max < min)
        return -1;
    int guess; 
	guess=(min + max) / 2;
    int guess_squared = guess * guess;
    if (guess_squared == n)
        return guess;
    else if (guess_squared < n)
       return squre_root_wrapper(n, guess + 1, max);
    else
       return squre_root_wrapper(n, min, guess - 1);

}


