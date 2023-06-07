#include <stdio.h>

/**
 * _puts_recursion - it prints a string
 * @s: the string
 * Return: Always 0
 */
void _puts_recursion(char *s) 
{
	if (!*s)
	{
		_putchar('\n');
	}
	else 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	return (0);
}
