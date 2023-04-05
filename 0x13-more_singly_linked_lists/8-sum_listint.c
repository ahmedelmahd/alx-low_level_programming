#include "lists.h"
/**
 * sum_listint - a function that returns the sum of a linked list
 * @head: the pointer to the first node in linked list
 * Return: the sum of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current_node;

	current_node = head;
	sum = 0;
	if (current_node == NULL)
	{
		return (0);
	}
	while (current_node->next != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	if (current_node->next == NULL)
	{
		sum += current_node->n;
	}
	return (sum);
}
