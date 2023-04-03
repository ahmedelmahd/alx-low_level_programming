#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function that prints the elements of the listnint struct
 * @h: a pointer to the first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
