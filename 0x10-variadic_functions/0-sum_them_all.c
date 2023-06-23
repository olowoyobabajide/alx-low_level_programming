#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments
 * @n: number of arguments
 * Return: sum 
 * On error, Return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a, add;

	add = 0;
	a = 0;

	va_start(list, n);
	if (n != 0)
		while (a < n)
		{
			add += va_arg(list, unsigned int);
			a++;
		}
	va_end(list);

	return (add);
}

