#include "main.h"

int current_diviser = 2;

int is_prime_number(int n) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % current_diviser == 0) {
        return 0;
    }
    if (current_diviser * current_diviser > n)
        return 1;
    current_diviser++;
    return is_prime_number(n);
}

