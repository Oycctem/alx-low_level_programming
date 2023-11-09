#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node at index of a list
 *@head: head of the list
 *@index: index to the node being deleted
 *Return: returns 1 if succesful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (!*head)
		return -1;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (!current)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
