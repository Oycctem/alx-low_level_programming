#include "lists.h"
/**
 *free_listint2 - function that frees a listint_t list
 *@head: head
 *Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
