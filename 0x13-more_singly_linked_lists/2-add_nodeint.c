#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a node to the start of the list
 * @head: a pointer to the pointer of the first node
 * @n: the new int
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
