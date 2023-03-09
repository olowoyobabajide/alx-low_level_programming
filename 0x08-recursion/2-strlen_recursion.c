#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: checks the string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] < '\0')
	{
		return;
			
	}
	_putchar(s[i]);
	_strlen_recursion(s + 1);
}
