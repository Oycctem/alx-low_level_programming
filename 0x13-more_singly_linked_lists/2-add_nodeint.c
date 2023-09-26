#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning
 * @head: pointer
 * @n: int
 * Return: returns the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (i)
	{
		return (NULL);
	}
	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}
