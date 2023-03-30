#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - a function that frees the linked list
 * @head: the pointer to the first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
