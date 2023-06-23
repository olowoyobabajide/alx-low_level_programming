#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers
 * @separator: separates numbers
 * @n: no of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	while (x < n)
	{
		printf("%i", va_arg(list, int));
		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		x++;
	}
	va_end(list);

	putchar('\n');
}

