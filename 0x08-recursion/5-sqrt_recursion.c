#include "main.h"

int find_root(int a, int b);

/**
 * find_root - Finds the square root of a number.
 * @a: number to find the square root of.
 * @b: root to be tested.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a square root - -1.
 */

int find_root(int a, int b)

{
	if ((b * b) == a)
	{
		return (b);
	}
	if (b == a / 2)
	{
		return (-1);
	}
	return (find_root(a, b + 1));

}
/**
 * _sqrt_recursion - returns square root of a number.
 * @n: number to return the square root.
 * Return: If n has a natural square root - the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int sqroot = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_root(n, sqroot));

}
