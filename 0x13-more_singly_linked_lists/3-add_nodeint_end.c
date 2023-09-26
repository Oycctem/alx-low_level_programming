#include "lists.h"
/**
 *add_nodeint_end - function the adds a new node at the end
 *@head: pointer
 *@n: int
 *Return: returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));
	listint_t *t;

	if (!head)
	{
		return (NULL);
	}
	t = *head;
	i->n = n;
	i->next = NULL;
	if (!i)
	{
		return (NULL);
	}
	if (!*head)
	{
		*head = i;
	}
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = i;
	}
	return (i);
}
