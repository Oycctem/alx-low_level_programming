#include "lists.h"
/**
 *print_dlistint - function that prints all the elements of a dlistint list
 *@h: the list
 *Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (!current)
	{
		return (0);
	}
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
