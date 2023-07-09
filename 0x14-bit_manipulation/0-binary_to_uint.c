#include "main.h"

/**
 * binary_to_uint - binary no to unsigned int
 * @b: string thathas the no
 * Return: the number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int val;

	a = 0;
	val = 0;

	if (!b)
		return (0);

	while (b[a])
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		val = 2 * val + (b[a] - '0');

		a++;
	}
	return (val);
}
