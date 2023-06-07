#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 if not prime, -1 if n < 2
 */
int is_prime_number(int n)
{
    int divisor;

    if (n < 2)
    {
        return 0;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}

