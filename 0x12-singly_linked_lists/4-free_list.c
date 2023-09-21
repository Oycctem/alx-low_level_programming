#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: the first node
 *Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
		n = head->n;
		free(head->str);
		free(head);
		head = n;
	}
}
