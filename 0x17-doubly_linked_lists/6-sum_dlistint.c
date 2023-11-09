#include "lists.h"
/**
 *sum_dlistint - function that returns the sum of all the data
 *@head: the head of list
 *Return: returns the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
