#include "lists.h"
/**
 *listint_len - function that returns the number of elements
 *@h: header
 *Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
