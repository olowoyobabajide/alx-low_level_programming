#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this functions prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	if(!name || !f)
	{
		return;
	}
}
