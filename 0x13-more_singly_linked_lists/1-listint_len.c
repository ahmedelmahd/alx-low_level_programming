#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in linked list
 * @h: a pointer to the first node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
