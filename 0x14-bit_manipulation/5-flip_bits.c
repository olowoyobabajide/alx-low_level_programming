#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: 1st no
 * @m: 2nd No
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, l;
	unsigned long int arr;
	unsigned long int list;

	l = 0;
	list = n ^ m;
	a = 63;

	while (a >= 0)
	{
		arr = list >> a;
		if (arr & 1)
			l++;

		a--;
	}
	return (l);
}
