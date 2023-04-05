#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of linked list
 * @head: a pointer to the first node
 * @index: the index at which we want the node of
 * Return: the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;

	i = 0;
	current_node = head;
	if (current_node == NULL)
	{
		return (NULL);
	}
	while ((i < index) && (head != NULL))
	{
		current_node = current_node->next;
		i++;
	}
	if ((i == index) && (current_node != NULL))
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
	current_node = current_node->next;
}
