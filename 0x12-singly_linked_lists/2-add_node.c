#include "lists.h"
/**
 *add_node - function that adds a new node to the beginning of a list_t
 *@head: the first node
 *@str: the string
 *Return: returns the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
