#include "main.h"

/**
 * swap_int - swaps the values of 2 pointers
 * @a: a is swpped with b
 * @b: b is swapped with a
 * Return: Always 0;
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
