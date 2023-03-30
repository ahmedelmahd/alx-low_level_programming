#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints the elements of list_t structure
 * @h: a pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}
