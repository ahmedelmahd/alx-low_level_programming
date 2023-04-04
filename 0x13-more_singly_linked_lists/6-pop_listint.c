#include "lists.h"
/**
 * pop_listint - a function that deletes the head of a linked list,
 * and returns its data (int n)
 * @head: a pointer that points to the pointer of the first node of listint_t
 * Return: the value of head
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	data = (*head)->n;
	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
