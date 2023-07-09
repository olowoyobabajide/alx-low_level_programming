#include "main.h"

/**
 * get_bit - value of a bit at an index in a decimal no
 * @n: number
 * @index: index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = (n >> index) & 1;

	if (index > 63)
		return (-1);

	return (val);
}

