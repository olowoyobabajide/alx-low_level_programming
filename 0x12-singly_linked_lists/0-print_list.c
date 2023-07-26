#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		if (h->str)
                        printf("[%u] %s\n", h->len, h->str);
		else if (!h->str)
			printf("[0] (nil)\n");	
		h = h->next;
		a++;
	}
	return (a);
}
