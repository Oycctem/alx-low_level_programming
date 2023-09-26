#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: int
 * Return: returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t = malloc(sizeof(listint_t));
	listint_t *i = *head;

	if (!t)
	{
		return (NULL);
	}
	t->n = n;
	t->next = NULL;
	if (idx == 0)
	{
		t->next = *head;
		*head = t;
		return (t);
	}
	for (a = 0; a < idx - 1 && i; a++)
	{
		i = i->next;
	}
	if (!i)
	{
		free(t);
		return (NULL);
	}
	t->next = i->next;
	i->next = t;
	return (t);
}
