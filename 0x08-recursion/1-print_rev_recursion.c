#include "main.h"

/**
 * _print_rev_recursion - this prints a string in reverse
 * @s: string to print
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
