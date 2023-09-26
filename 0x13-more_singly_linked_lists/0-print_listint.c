#include "lists.h"
/**
 *print_listint - function that prints all the elements of listint_t
 *@h: header
 *Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
