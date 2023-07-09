#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: Always 0
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return (*b);
}
