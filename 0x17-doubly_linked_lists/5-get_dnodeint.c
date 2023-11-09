#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth node of a list
 *@head: head of the list
 *@index: index of the node
 *Return: returns the pointer to the nth node else null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
