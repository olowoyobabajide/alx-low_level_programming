#include "main.h"

void rev_string(char *s);
void put_recursion(char *s);

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	if (*s)
	{
		rev_string(s + 1);
		_putchar(*s);
	}

}
/**
 * put_recursion - it prints a string
 * @s: the string
 * Return: Always 0
 */
void put_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		put_recursion(s + 1);
	}
}
/**
 * is_palindrome - checks if a word is a palindrome
 * @s: word to be checked
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	if (put_recursion(s) == rev_string(s))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
