#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees the linked list and sets head to null
 * @head: a pointer to the pointer that points to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
	*head = NULL;
}
