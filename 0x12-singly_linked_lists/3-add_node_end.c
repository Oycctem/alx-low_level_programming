#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of list_t
 *@head: the first node
 *@str: the string
 *Return: returns the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *t;

	new_node = malloc(sizeof(list_t));
	if (!new_node || !str)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = new_node;
	return (new_node);
}
