#include "main.h"

/**
 * set_bit - sets a bit
 * @n: pointer to the no
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for error/failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = ((1UL << index) | *n);

	if (index > 63)
		return (-1);

	return (1);
}
