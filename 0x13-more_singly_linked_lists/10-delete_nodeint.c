#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the node at index
 *@head: head
 *@index: index of the node
 *Return: returns 1 if it succeeded else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *t;
	unsigned int a;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}
	for (a = 0; a < index -1; a++)
	{
		if (!i || !(i->next))
		{
			i = i->next;
			return (-1);
		}
	}
	t = i->next;
	i->next = t->next;
	free(t);
	return (1);
}
