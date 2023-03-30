#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - a function that adds a new node at the start of linked list
 * @head: a pointer that points to the head pointer
 * @str: the new node to add
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
		free(new_node);
		return (NULL);
	}
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
