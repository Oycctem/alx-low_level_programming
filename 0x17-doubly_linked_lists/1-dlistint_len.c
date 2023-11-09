#include "lists.h"
/**
 *dlistint_len - function that returns the number of elements in a linked list
 *@h: head
 *Return: returns the number of elements
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
