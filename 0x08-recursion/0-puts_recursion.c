#include "main.h"

/**
 * _puts_recursions - prints a function followed by a new line
 * @s: character is printed
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
