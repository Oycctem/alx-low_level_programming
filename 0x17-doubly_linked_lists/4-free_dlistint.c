#include "lists.h"
/**
 *free_dlistint - function that frees a list
 *@head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
