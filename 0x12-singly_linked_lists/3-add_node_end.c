#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a function that adds a new node at the end of linked list
 *  @head: a pointer that points to the head pointer
 *  @str: the new node to add
 *  Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->len = count;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
