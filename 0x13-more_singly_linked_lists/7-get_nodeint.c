#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node
 * @head: head
 * @index: the index of the node
 * Return: Returns NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index > 0 && head; index--)
	{
		head = head->next;
	}
	return (head);
}
