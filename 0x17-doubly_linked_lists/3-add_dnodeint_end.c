#include "lists.h"
/**
 *add_dnodeint_end - function that add a new node at the end of the list
 *@head: the head
 *@n: value
 *Return: pointer to the added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;

	if (!*head)
	{
		(*head) = newNode;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (newNode);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
