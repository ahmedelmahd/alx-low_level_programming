#include "lists.h"

/**
 * list_len - a function that returns the number of elements in the linked list
 * @h: a pointer to the first node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			n++;
			h = h->next;
		}
	}
	return (n);
}
