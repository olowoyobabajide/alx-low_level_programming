#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 if not prime, -1 if n < 2
 */
int is_prime_recursive(int n, int divisor);

int is_prime_recursive(int n, int divisor)
{
    if (n < 2)
    {
        return 0;
    }
    if (divisor * divisor > n)
    {
        return 1;
    }
    if (n % divisor == 0)
    {
        return 0;
    }
    return is_prime_recursive(n, divisor + 1);
}

int is_prime_number(int n)
{
    return is_prime_recursive(n, 2);
}
