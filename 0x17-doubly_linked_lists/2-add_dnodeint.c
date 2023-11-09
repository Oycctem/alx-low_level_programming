#include "lists.h"
/**
 *add_dnodeint - function that add a new node at the beginning of the list
 *@head: the head
 *@n: value
 *Return: pointer to the added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head)
	{
		(*head) = nodeNode;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
