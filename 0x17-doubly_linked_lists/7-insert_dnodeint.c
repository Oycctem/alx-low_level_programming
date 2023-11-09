#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a new node
 *@h: the head of the list
 *@idx: index where the new node will be inserted
 *@n: value of the new node
 *Return: returns the pointer to the new node else null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current = *h;
	unsigned int count = 0;

	if (h == NULL || newNode == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current)
	{
		if (count == idx - 1)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (!newNode)
				return (NULL);
			newNode->n = n;
			newNode->next = current->next;
			newNode->prev = current;
			if (current->next)
				current->next->prev = newNode;
			current->next = newNode;

			if (!newNode->next)
				return (add_dnodeint_end(h, n));
			return (newNode);
		}
		current = current->next;
		count++;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
