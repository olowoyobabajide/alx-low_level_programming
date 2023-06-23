#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separate strings
 * @n: no of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *a;

	x = 0;

	va_start(list, n);

	while (x < n)
	{
		a = va_arg(list, char*);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");

		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
		x++;
	}
	va_end(list);

	putchar('\n');
}

