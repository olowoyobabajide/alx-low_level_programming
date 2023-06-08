#include "main.h"

int prime_recursive(int n, int d);

/**
 * prime_recursive - checks if a number is prime
 * @n: number
 * @d: divisor
 * Return: 1 if prime, 0 if not prime, -1 if n < 2
 */
int prime_recursive(int n, int d)
{
	if (n < 2)
	{
		return (0);
	}
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (prime_recursive(n, d + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	return (prime_recursive(n, 2));
}
