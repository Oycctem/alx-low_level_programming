#include "lists.h"
/**
 *pop_listint - function that deletes the head node
 *@head: head
 *Return: returns head node data
 */
int pop_listint(listint_t **head)
{
	int t;
	listint_t *i;

	if (!*head)
	{
		return (0);
	}
	t = (*head)->n;
	i = *head;
	*head = (*head)->next;
	free(i);
	return (t);
}
