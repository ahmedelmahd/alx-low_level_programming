#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a linked list
 * @head: a pointer to the head of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
